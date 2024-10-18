#pragma once
#ifndef cl_queries_hpp
#define cl_queries_hpp

#include <chocolite.hpp>

namespace CLQuery {
    // Common elements that any Chocolite query might use
    struct common {
        int dimension;
        std::string container_name;
        std::string structure_name;
    };
    struct finalise : common {
        // FINALISE {table/stock/tesseract} IN {container}
        bool make_uneditable = true;
    };
    struct pick : common  {
        // PICK {data} FROM {table/stock/tesseract} IN {container}
        std::any data;
    };
    struct wipe : common {
        // WIPE {table/stock/tesseract} IN {container}
        bool delete_everything_on_table = true;
    };
    struct build {
        // BUILD CONTAINER {container}
        std::string container_name;
    };
    struct insert : common {
        // INSERT {table/stock/tesseract} INTO {container} AT POSITION {int}
        int position;
    };
    struct obfuscate : common {
        // OBFUSCATE {table/stock/tesseract} IN {container}
        std::string obfuscate_type;
    };
    struct add_header : common {
        // ADD HEADER {header} TO {table/stock/tesseract} AT {x/y/z} IN {container}
        std::string header;
    };
    struct lock : common {
        // LOCK ELEMENT {coordinates} ON {table/stock/tesseract} IN {container}
        bool lock_element = true;
    };
    struct push : common {
        // PUSH {data} TO {table/stock/tesseract} IN {container} AT {coordinates}
        std::any data;
    };
    struct grab : common {
        // GRAB DATA ON {coordinates} FROM {table/stock/tesseract} IN {container}
        std::vector<int> coordinates;
    };
    struct grab_range : common {
        // GRAB DATA RANGE FROM {coordinates_origin} TO {coordinates_end} ON {table/stock/tesseract} IN {container}
        std::vector<int> coordinates_origin;
        std::vector<int> coordinates_end;
    };
    struct make : common {
        // MAKE {table/stock/tesseract} WITHOUT LIMIT ON CONTAINER {container}
        bool infinite = true;
    };
    struct make_fixed : common {
        // MAKE {table/stock/tesseract} WITH LIMITS UP TO COORDINATES {coordinates} ON CONTAINER {container}
        std::vector<int> limit;
    };
    struct erase : common {
        // ERASE DATA FROM {coordinates} ON {table/stock/tesseract} IN {container}
        std::vector<int> coordinates;
    };
    struct erase_range : common {
        // ERASE DATA IN RANGE FROM {coordinates_origin} TO {coordinates_end} ON {table/stock/tesseract} IN {container}
        std::vector<int> coordinates_origin;
        std::vector<int> coordinates_end;
    };
    struct remove : common {
        // REMOVE {TABLE/STOCK/TESSERACT/CONTAINER}
        bool recursive; // directive used if a data structure is defined generally and not by name
    };
}

#endif
