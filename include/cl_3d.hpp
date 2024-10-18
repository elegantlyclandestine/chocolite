#pragma once
#ifndef cl_container3d_hpp
#define cl_container3d_hpp

#include <chocolite.hpp>

namespace Choco3D {
    struct block {
        int x; int y; int z;
        std::string data_type;
        std::any content;
        block(int x = 0, int y = 0, int z = 0, std::string data_type = "", std::any content = "") :
            x(x), y(y), z(z), data_type(data_type), content(content) {}
        ~block() {}
    };
    class stock {
    private:
        int pos;
        std::string name;
        std::vector<Choco3D::block> blocks;
        std::vector<std::string> headers_2d;
        std::vector<std::string> headers_3d;
    public:
        stock(std::string name = "", std::vector<Choco3D::block> blocks = {}) :
            name(name) {
                // Read if there are any existing stocks in container,
                // count one for any found, then pos++
            }
        std::any read_from_block(int x, int y, int z) {
            
        }
        Choco3D::block find_block_from_data(std::any content) {

        }
        void insert_data_to_block(Choco3D::stock& stock, int x, int y, int z, std::any content) {

        }
        void remove_data_from_block(Choco3D::stock& stock, int x, int y, int z){
            
        }
        void move_data_between_blocks(Choco3D::block& source, Choco3D::block& destination, std::optional<bool> overwrite = std::nullopt) {
            
        }
        void shift_data(char coordinate, int origin, int offset) {
            // Will shift data depending on coordinate and offset.
            // -x = left; +x = right. -y = up, +y = down. -z = nearer, +z = farther.
        }
        void add_header(Choco3D::stock& stock, std::string header, int dimension) {
            
        }
        void remove_header(Choco3D::stock& stock, std::string header, int dimension) {
            
        }
    };
}

#endif