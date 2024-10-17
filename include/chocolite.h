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
    void write_db(std::string db_name);
    void read_db(std::string db_name);
};

#endif