#pragma once
#ifndef cl_poly_hpp
#define cl_poly_hpp

#include <chocolite.hpp>

namespace ChocoPoly {
    struct element {
        std::vector<int> coordinates;
        std::string data_type;
        std::any content;
        element(std::vector<int> coordinates, std::string data_type = "", std::any content = "") :
            coordinates(coordinates), data_type(data_type), content(content) {}
        ~element() {}
    };
    class shape {
    private:
        int pos;
        int dimensions;
        std::string name;
        std::vector<ChocoPoly::element> elements;
        std::vector<std::pair<int, std::string>> headers;
    public:
        shape(int dimensions, std::string name = "", std::vector<ChocoPoly::element> elements = {}) :
            dimensions(dimensions), name(name), elements(elements) {
                // Read if there are any existing shapes in container,
                // count one for any found, then pos++
            }
        std::any read_from_element(std::vector<int> coordinates) {
            
        }
        ChocoPoly::element find_element_from_data(std::any content) {

        }
        void insert_data_to_element(ChocoPoly::element& element, std::vector<int> coordinates, std::any content) {

        }
        void remove_data_from_element(ChocoPoly::element& element, std::vector<int> coordinates){
            
        }
        void move_data_between_elements(ChocoPoly::element& source, ChocoPoly::element& destination, std::optional<bool> overwrite = std::nullopt) {
            
        }
        void shift_data(std::vector<int> coordinates, int origin, int offset) {
            // Will shift data depending on coordinates and offset.
            // This will depend on the number of dimensions the shape has.
        }
        void add_header(ChocoPoly::shape& shape, std::string header, int dimension) {
            
        }
        void remove_header(ChocoPoly::shape& shape, std::string header, int dimensions) {
            
        }
    };
}

#endif