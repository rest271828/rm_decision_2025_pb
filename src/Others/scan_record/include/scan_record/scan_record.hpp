#pragma once

#include <vector>
#include <string>
#include <filesystem>
#include <fstream>

class ScanRecord {
public:
    ScanRecord() = default;

    ScanRecord(const std::string& path);

    void save_to(const std::string& distPath) const;

    void load_from(const std::string& srcPath);

    struct Coordinate {
        float x;
        float y;
        float yaw;
    } coordinate;
    std::vector<float> ranges;
};