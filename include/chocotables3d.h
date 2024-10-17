#pragma once
#ifndef chocotables3d_h
#define chocotables3d_h

#include "chocotables.h"

namespace Chocotables3D {
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
        std::vector<Chocotables3D::block> blocks;
    public:
        stock(std::string name) :
            name(name) {
                // Read if there are any existing stocks in container,
                // count one for any found, then pos++
            }
        std::any read_from_block(int x, int y, int z) {
            
        }
        Chocotables3D::block find_block_from_data(std::any content) {

        }
        void insert_data_to_block(Chocotables3D::stock& stock, int x, int y, int z, std::any content) {

        }
        void remove_data_from_block(Chocotables3D::stock& stock, int x, int y, int z){
            
        }
        void move_data_between_blocks(Chocotables3D::block& source, Chocotables3D::block& destination, std::optional<bool> overwrite = std::nullopt) {
            
        }
        void shift_data(char coordinate, int origin, int offset) {
            // Will shift data depending on coordinate and offset.
            // -x = left; +x = right. -y = up, +y = down. -z = nearer, +z = farther.
        }
    };
    class container {
    private:
        std::string name;
        std::vector<Chocotables3D::stock> stocks;
    public:
        container(std::string name) :
            name(name), stocks(stocks) {}
        Chocotables3D::stock load_stock (std::string& name) {

        }
        std::any select_data_from_stock(std::any content, Chocotables3D::stock) {

        }
        void add_table(Chocotables3D::stock& stock) {
            
        }
        void remove_table(Chocotables3D::stock& stock) {
            
        }
        void move_table(Chocotables3D::stock& stock, int pos) {

        }
        void sort_block(Chocotables3D::stock& stock, std::string& sort_by) {
            
        }
        bool stock_exists(const Chocotables3D::stock& stock) {

        }
        Chocotables3D::stock find_stock_from_data(std::any content) {
            
        }
        Chocotables3D::block find_block_from_data(std::any content) {
            
        }
        std::vector<Chocotables3D::block> return_sort_3D(Chocotables3D::stock& stock, std::string& sort_by) {
            
        }
        void transfer_stock(Chocotables3D::stock& stock, Chocotables3D::container& new_container) {
            
        }
    };
}

#endif