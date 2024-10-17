#pragma once
#ifndef chocotables2d_h
#define chocotables2d_h

#include "chocotables.h"

namespace Chocotables2D {
    struct cell {
        int col; int row;
        std::string data_type;
        std::any content;
        cell(int col, int row, std::string data_type, std::any content) :
            col(col), row(row), data_type(data_type), content(content) {}
        ~cell() {}
    };
    class table {
    private:
        int pos;
        std::string name;
        std::vector<std::string> headers;
        std::vector<Chocotables2D::cell> cells;
    public:
        table(std::string name, std::vector<std::string>& headers):
            name(name), headers(headers) {
                // Read if there are any existing tables in container,
                // count one for any found, then pos++
            }
        ~table() {}
        std::any read_from_cell(int col, int row) {
            
        }
        Chocotables2D::cell find_cell_from_data(std::any content) {

        }
        void insert_data_to_cell(Chocotables2D::table& table, int col, int row, std::any content) {

        }
        void remove_data_from_cell(Chocotables2D::table& table, int col, int row) {
            
        }
        void move_data_between_cells(Chocotables2D::cell& source, Chocotables2D::cell& destination, std::optional<bool> overwrite = std::nullopt) {
            
        }
        void shift_data(char coordinate, int origin, int offset) {
            // Will shift data depending on coordinate and offset.
            // -x = left; +x = right. -y = up, +y = down.
        }
        void add_header(Chocotables2D::table& table, std::string header) {
            
        }
        void remove_header(Chocotables2D::table& table, std::string header) {
            
        }
    };
    class container {
    private:
        std::string name;
        std::vector<Chocotables2D::table> tables;
    public:
        container(std::string name) :
            name(name), tables(tables) {}
        Chocotables2D::table load_table (std::string& name) {

        }
        std::any select_data_from_table(std::any content, Chocotables3D::stock) {

        }
        void add_table(Chocotables2D::table& table) {
            
        }
        void remove_table(Chocotables2D::table& table) {
            
        }
        void move_table(Chocotables2D::table& table, int pos) {

        }
        void sort_table(Chocotables2D::table& table, std::string& sort_by) {
            
        }
        bool table_exists(const Chocotables2D::table& table) {

        }
        Chocotables2D::table find_table_from_data(std::any content) {
            
        }
        Chocotables2D::cell find_cell_from_data(std::any content) {
            
        }
        std::vector<Chocotables2D::cell> return_sort_2D(Chocotables2D::table& table, std::string& sort_by) {
            
        }
        void transfer_table(Chocotables2D::table& table, Chocotables2D::container& new_container) {
            
        }
    };
}

#endif