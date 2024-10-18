#pragma once
#ifndef cl_container2d_hpp
#define cl_container2d_hpp

#include <chocolite.hpp>

namespace Choco2D {
    struct cell {
        int col; int row;
        std::string data_type;
        std::any content;
        cell(int col = 0, int row = 0, std::string data_type = "", std::any content = "") :
            col(col), row(row), data_type(data_type), content(content) {}
        ~cell() {}
    };
    class table {
    private:
        int pos;
        std::string name;
        std::vector<std::string> headers;
        std::vector<Choco2D::cell> cells;
    public:
        table(std::string name = "", std::vector<std::string> headers = {}):
            name(name), headers(headers) {
                // Read if there are any existing tables in container,
                // count one for any found, then pos++
            }
        ~table() {}
        std::any read_from_cell(int col, int row) {
            
        }
        Choco2D::cell find_cell_from_data(std::any content) {

        }
        void insert_data_to_cell(Choco2D::table& table, int col, int row, std::any content) {

        }
        void remove_data_from_cell(Choco2D::table& table, int col, int row) {
            
        }
        void move_data_between_cells(Choco2D::cell& source, Choco2D::cell& destination, std::optional<bool> overwrite = std::nullopt) {
            
        }
        void shift_data(char coordinate, int origin, int offset) {
            // Will shift data depending on coordinate and offset.
            // -x = left; +x = right. -y = up, +y = down.
        }
        void add_header(Choco2D::table& table, std::string header) {
            
        }
        void remove_header(Choco2D::table& table, std::string header) {
            
        }
    };
}

#endif