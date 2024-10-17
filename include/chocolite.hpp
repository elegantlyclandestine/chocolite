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

#include <container2d.hpp>
#include <container3d.hpp>
#include <cl_queries.hpp>

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
    
    // 2D functions
    Choco2D::container load_2d_container(std::string container);
    Choco2D::container unload_2d_container(std::string container);

    // 3D functions
    Choco3D::container load_3d_container(std::string container);
    Choco3D::container unload_3d_container(std::string container);
};

#endif