#pragma once
#ifndef chocotables_h
#define chocotables_h

#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <filesystem>
#include <atomic>
#include <optional>
#include <any>

#include "chocotables2d.h"
#include "chocotables3d.h"

namespace fs = std::filesystem;

namespace Chocotables {
    void write_db(std::string db_name);
    void read_db(std::string db_name);
};

#endif