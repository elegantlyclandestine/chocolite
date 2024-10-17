#pragma once
#ifndef chocolite_h
#define chocolite_h

#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <filesystem>
#include <atomic>
#include <optional>
#include <any>

#include "container2d.h"
#include "container3d.h"

namespace fs = std::filesystem;

namespace Chocolite {
    // For command line / user-side interactions
    enum query { 
        // 2D queries
        push2D, pick2D, grab2D,
        // 3D queries
        push3D, pick3D, grab3D
    };
    Chocolite::query check_query(std::string query);
    struct push2D {
        // PUSH {data} TO {table} IN {container} AT {x,y}
        std::string data;
        std::string container;
        std::string table;
        int x;
        int y;
    };
    struct push3D {
        // PUSH {data} TO {table} IN {container} AT {x,y,z}
        std::string data;
        std::string container;
        std::string table;
        int x;
        int y;
        int z;
    };
    struct pick2D {
        // PICK {data} FROM {table} IN {container}
        std::string data;
        std::string container;
        std::string table;
    };
    struct pick3D {
        // PICK {data} FROM {table} IN {container}
        std::string data;
        std::string container;
        std::string table;
    };
    struct grab2D {
        // GRAB DATA ON {x,y} FROM {table} IN {container}
        std::string container;
        std::string table;
        int x;
        int y;
    };
    struct grab3D {
        // GRAB DATA ON {x,y,z} FROM {table} IN {container}
        std::string container;
        std::string table;
        int x;
        int y;
        int z;
    };
    struct make2D {
        // MAKE {table} WITH HEADERS {headers}
        std::string name;
        std::vector<std::string> headers;
    };
    
    // 2D functions
    Choco2D::container load_2d_container(std::string container);
    Choco2D::container unload_2d_container(std::string container);

    // 3D functions
    Choco3D::container load_3d_container(std::string container);
    Choco3D::container unload_3d_container(std::string container);
};

#endif