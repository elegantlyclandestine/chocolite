#pragma once
#ifndef choco_container3d_h
#define choco_container3d_h

#include "chocolite.h"

namespace Choco3D {
    struct block {
        int x; int y; int z;
        std::string data_type;
        std::any content;
        block(int x, int y, int z, std::string data_type, std::any content) :
            x(x), y(y), z(z), data_type(data_type), content(content) {}
        ~block() {}
    };
    class stock {
    private:
        int pos;
        std::string name;
        std::vector<Choco3D::block> blocks;
    public:
        stock(std::string name) :
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
    };
    class container {
    private:
        std::string name;
        std::vector<Choco3D::stock> stocks;
    public:
        container(std::string name) :
            name(name), stocks(stocks) {}
        Choco3D::stock load_stock (std::string& name) {

        }
        std::any select_data_from_stock(std::any content, Choco3D::stock) {

        }
        void add_table(Choco3D::stock& stock) {
            
        }
        void remove_table(Choco3D::stock& stock) {
            
        }
        void move_table(Choco3D::stock& stock, int pos) {

        }
        void sort_block(Choco3D::stock& stock, std::string& sort_by) {
            
        }
        bool stock_exists(const Choco3D::stock& stock) {

        }
        Choco3D::stock find_stock_from_data(std::any content) {
            
        }
        Choco3D::block find_block_from_data(std::any content) {
            
        }
        std::vector<Choco3D::block> return_sort_3D(Choco3D::stock& stock, std::string& sort_by) {
            
        }
        void transfer_stock(Choco3D::stock& stock, Choco3D::container& new_container) {
            
        }
    };
}

#endif