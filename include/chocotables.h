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

namespace Chocotables {
    struct cell {
        int col;
        int row;
        std::string data_type;
        std::string content;
        cell(int col, int row, std::string data_type, std::string content) :
            col(col), row(row), data_type(data_type), content(content) {}
    };
    class table {
    private:
        int pos;
        std::string name;
        std::vector<Chocotables::cell> cells;
    public:
        table(std::string name, std::vector<Chocotables::cell> cells) :
            name(name), cells(cells) {}
        ~table() {}
        Chocotables::cell read_from_cell(int col, int row) {
            
        }
        void insert_data_to_cell(Chocotables::table& table, int col, int row, std::string content) {

        }
        void remove_data_from_cell(Chocotables::table& table, int col, int row) {
            
        }
        void move_data_between_cells(Chocotables::cell& source, Chocotables::cell& destination, std::optional<bool> overwrite = std::nullopt) {
            
        }
    };
    class container {
    private:
        std::string name;
        std::vector<Chocotables::table> tables;
    public:
        container(std::string name, std::vector<Chocotables::table> tables) :
            name(name), tables(tables) {}
        Chocotables::table load_in_table (std::string& name) {

        }
        void add_table(Chocotables::table& table) {
            
        }
        void remove_table(Chocotables::table& table) {
            
        }
        void move_table(Chocotables::table& table, int pos) {
            
        }
    };
};

#endif