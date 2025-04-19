#include "scan_record/scan_record.hpp"

ScanRecord::ScanRecord(const std::string& path) {
    this->load_from(path);
}

void ScanRecord::save_to(const std::string& distPath) const {
    std::ofstream file(distPath, std::ios::binary);
    if (!file) {
        printf("Failed to open file: %s", distPath.c_str());
        return;
    }
    file.write(reinterpret_cast<const char*>(&coordinate), sizeof(coordinate));
    uint32_t size = ranges.size();
    file.write(reinterpret_cast<const char*>(&size), sizeof(size));
    file.write(reinterpret_cast<const char*>(ranges.data()), size * sizeof(float));
}

void ScanRecord::load_from(const std::string& srcPath) {
    std::ifstream file(srcPath, std::ios::binary);
    if (!file) {
        printf("Failed to open file: %s", srcPath.c_str());
        return;
    }
    file.read(reinterpret_cast<char*>(&coordinate), sizeof(coordinate));
    uint32_t size;
    file.read(reinterpret_cast<char*>(&size), sizeof(size));
    ranges.resize(size);
    file.read(reinterpret_cast<char*>(ranges.data()), size * sizeof(float));
}