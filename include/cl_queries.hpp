#pragma once
#ifndef cl_queries_hpp
#define cl_queries_hpp

#include <chocolite.hpp>

namespace CLQuery {
    // Common elements that any Chocolite query might use
    struct common {
        std::string container_name;
        std::string shape_name;
    };
    struct finalise : common {
        // FINALISE {shape} IN {container}
        bool make_uneditable;
    };
    struct pick : common  {
        // PICK {data} FROM {shape} IN {container}
        std::any data;
    };
    struct wipe : common {
        // WIPE ALL FROM {shape} IN {container}
        // WIPE DATA FROM {shape} IN {container} BASED ON {filters}
        std::optional<Chocolite::wipe_type> delete_everything_on_shape = std::nullopt;
        std::optional<std::vector<Chocolite::wipe_filter>> filters = std::nullopt;
    };
    struct build {
        // BUILD CONTAINER {container}
        std::string container_name;
    };
    struct insert : common {
        // INSERT {shape} INTO {container} AT POSITION {int}
        int position;
    };
    struct obfuscate {
        // OBFUSCATE {container} WITH {ENCRYPTION/RANDFILL/SAMEFILL/SCATTER}
        // OBFUSCATE {shape} IN {container} WITH {ENCRYPTION/RANDFILL/SAMEFILL/SCATTER}
        std::string container_name;
        std::optional<std::string> shape_name = std::nullopt;
        Chocolite::obfuscation_type obfuscation_type;
    };
    struct add_header : common {
        // ADD HEADER {header} TO {shape} AT {x/y/z} IN {container}
        std::string header;
    };
    struct lock : common {
        // LOCK ELEMENT {coordinates} ON {shape} IN {container}
        bool lock_element = true;
    };
    struct push : common {
        // PUSH {data} TO {shape} IN {container} AT {coordinates}
        std::any data;
    };
    struct grab : common {
        // GRAB DATA ON {coordinates} FROM {shape} IN {container}
        std::vector<int> coordinates;
    };
    struct grab_range : common {
        // GRAB DATA RANGE FROM {coordinates_origin} TO {coordinates_end} ON {shape} IN {container}
        std::vector<int> coordinates_origin;
        std::vector<int> coordinates_end;
    };
    struct make : common {
        // MAKE {shape} WITH {int} DIMENSIONS WITHOUT LIMIT ON CONTAINER {container}
        bool infinite = true;
    };
    struct make_fixed : common {
        // MAKE {shape} WITH {int} DIMENSIONS WITH LIMITS UP TO COORDINATES {coordinates} ON CONTAINER {container}
        std::vector<int> limit;
    };
    struct erase : common {
        // ERASE DATA FROM {coordinates} ON {shape} IN {container}
        std::vector<int> coordinates;
    };
    struct erase_range : common {
        // ERASE DATA IN RANGE FROM {coordinates_origin} TO {coordinates_end} ON {shape} IN {container}
        std::vector<int> coordinates_origin;
        std::vector<int> coordinates_end;
    };
    struct remove : common {
        // REMOVE {shape/container}
        bool recursive; // directive used if a shape is defined generally and not by name
    };
    struct manip_d : common {
        // MANIPULATE DIMENSIONS TO {int} ON {shape} IN {container}
        bool destructive; // directive used if user wants to destroy data in affected dimensions
    };
};

#endif
