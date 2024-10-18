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

#include <cl_container2d.hpp>
#include <cl_container3d.hpp>
#include <cl_queries.hpp>

namespace fs = std::filesystem;

namespace Chocolite {
    // For command line / user-side interactions
    enum query { 
        // Universal queries
        finalise, pick, wipe, build, insert, obfuscate,
        // 2D queries
        push2D, grab2D, grab_range2D, make2D, erase2D,
        // 3D queries
        push3D, grab3D, grab_range3D, make3D, erase3D
    };
    Chocolite::query check_query(std::string query);
    
    // 2D functions
    Choco2D::container load_2d_container(std::string container);
    void unload_2d_container(std::string container);

    // 3D functions
    Choco3D::container load_3d_container(std::string container);
    void unload_3d_container(std::string container);
};

#endif