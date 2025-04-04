class Area : public Object {
    public:
        Area() {}
    
        Area(const iw_interfaces::msg::Area& msg) : Object(msg.label) {
            for (const auto& planeCoordinateMsg : msg.vertices) {
                vertices_.push_back(PlaneCoordinate(planeCoordinateMsg));
            }
        }
    
        Area(const std::string& label_, const std::vector<iw_interfaces::msg::PlaneCoordinate>& msgvertices_) : Object(label_) {
            for (const auto& planeCoordinateMsg : msgvertices_) {
                vertices_.push_back(PlaneCoordinate(planeCoordinateMsg));
            }
        }
    
        static void array_to_area(const std::vector<double>& doubleArray, Area& area) {
            assert((doubleArray.size() & 1) == 0 && "Extra Parameter ERROR");
            for (uint i = 0; i + 1 < doubleArray.size(); i += 2) {
                PlaneCoordinate coordinate;
                coordinate.x = doubleArray[i];
                coordinate.y = doubleArray[i + 1];
                area.vertices_.push_back(coordinate);
            }
        }
    
        iw_interfaces::msg::Area to_message() const {
            auto msg = iw_interfaces::msg::Area();
            for (const auto& vertex : vertices_) {
                auto planeCoordinateMsg = vertex.to_message();
                msg.vertices.push_back(planeCoordinateMsg);
            }
            msg.label = label;
            return msg;
        }
    
        bool contain(const PlaneCoordinate& point) const {
            auto infinity = PlaneCoordinate(point.x, INF);
            uint intersect_count = 0;
            for (size_t i = 0; i + 1 < vertices_.size(); i++) {
                if (PlaneCoordinate::intersect(point, infinity, vertices_[i], vertices_[i + 1])) {
                    intersect_count++;
                }
            }
            if (PlaneCoordinate::intersect(point, infinity, vertices_[0], *vertices_.end())) {
                intersect_count++;
            }
            return (intersect_count % 2 == 1);
        }
    
    protected:
        std::vector<PlaneCoordinate> vertices_;  // 按照逆/顺时针顺序初始化的顶点坐标
    };