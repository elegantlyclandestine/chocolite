#pragma once
#ifndef chocolite_hpp
#define chocolite_hpp

#include <vector>
#include <string>   
#include <fstream>
#include <sstream>
#include <filesystem>
#include <atomic>
#include <optional>
#include <any>

#include <cl_queries.hpp>

namespace fs = std::filesystem;

namespace Chocolite {
    enum sort_type { HEADER, DIMENSION, ASCENDING, DESCENDING, FOR_EVERY_RANGE };
    enum obfuscation_type { ENCRYPT, FILL_RANDOM, FILL_SIMILAR, SCATTER };
    enum load_type { READONLY, WRITABLE, WORM };
    enum find_type { DATA, ELEMENT_NAME, SHAPE_CONTENTS, SHAPE_NAME, CONTAINER_CONTENTS, CONTAINER_NAME };
    enum wipe_type { ALL, SELECTIVE };
    enum wipe_filter { NUMERICAL, ALPHABETICAL, };
    enum query {
        FINALISE, PICK, WIPE, BUILD, INSERT, OBFUSCATE,
        ADD_HEADER, LOCK, PUSH, GRAB, GRAB_RANGE, MAKE,
        MAKE_FIXED, ERASE, ERASE_RANGE, REMOVE, MANIP_D
    };
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
        std::vector<Chocolite::element> elements;
        std::vector<std::pair<int, std::string>> headers;
    public:
        shape(int dimensions, std::string name = "", std::vector<Chocolite::element> elements = {}) :
            dimensions(dimensions), name(name), elements(elements) {
                // Read if there are any existing shapes in container,
                // count one for any found, then pos++
            }
        friend std::any read_from_element(Chocolite::shape& shape, std::vector<int> coordinates);
        friend Chocolite::element find_element_from_data(Chocolite::shape& shape, std::any content);
        friend void insert_data_to_element(Chocolite::shape& shape, Chocolite::element& element, std::vector<int> coordinates, std::any content);
        friend void remove_data_from_element(Chocolite::shape& shape, Chocolite::element& element, std::vector<int> coordinates);
        friend void move_data_between_elements(Chocolite::shape& shape, Chocolite::element& source, Chocolite::element& destination, std::optional<bool> overwrite = std::nullopt);
        friend void shift_data(Chocolite::shape& shape, std::vector<int> coordinates, int origin, int offset);
        friend void add_header(Chocolite::shape& shape, std::string header, int dimension);
        friend void remove_header(Chocolite::shape& shape, std::string header, int dimensions);
    };
    class container {
    private:
        int position;
        std::string name;
        std::vector<Chocolite::shape> shapes;
    public:
        container(std::string name = "", std::vector<Chocolite::shape> shapes = {}) :
            name(name), shapes(shapes) {}
        ~container() {}
        friend void add_shape_to_container(std::string name, Chocolite::container container);
        friend void remove_shape_from_container(std::string name, Chocolite::container container);
        friend void move_position_of_container(Chocolite::shape& shape, int pos);
        friend void sort_data_on_container(std::string name, std::string& sort_by);
        friend bool shape_exists(std::string name);
        friend Chocolite::element find_element_from_data(std::any content);
        friend Chocolite::shape find_shape_from_data(std::any content);
        friend void transfer_shape_to_container(std::string name, Chocolite::container& new_container);
        friend std::any select_data_from_shape(std::any content, std::optional<bool> unique_only = false);
    };
    Chocolite::query check_query(std::string stream);
    
    void load_container(std::string container_name);
    void unload_container(std::string container_name);
    void parse_query(std::string stream);

};

#endif