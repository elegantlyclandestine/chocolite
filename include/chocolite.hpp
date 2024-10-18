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

#include <cl_2d.hpp>
#include <cl_3d.hpp>
#include <cl_queries.hpp>

namespace fs = std::filesystem;

namespace Chocolite {
    class container {
    private:
        std::string name;
        std::vector<Choco2D::table> tables;
        std::vector<Choco3D::stock> stocks;
    public:
        container(std::string name = "", std::vector<Choco2D::table> tables = {}, std::vector<Choco3D::stock> stocks = {}) :
            name(name), tables(tables), stocks(stocks) {}
        Choco3D::stock load_stock (std::string& name) {

        }
        Choco3D::stock load_stock (std::string& name) {

        }
        std::any select_data(std::any content, Choco3D::stock) {

        }
        void add_table(Choco3D::stock& stock) {
            
        }
        void remove(Choco3D::stock& stock) {
            
        }
        void move(Choco3D::stock& stock, int pos) {

        }
        void sort(Choco3D::stock& stock, std::string& sort_by) {
            
        }
        bool stock_exists(const Choco3D::stock& stock) {

        }
        Choco2D::cell find_cell_from_data(std::any content) {

        }
        Choco2D::table find_table_from_data(std::any content) {

        }
        Choco3D::stock find_stock_from_data(std::any content) {
            
        }
        Choco3D::block find_block_from_data(std::any content) {
            
        }
        std::vector<Choco3D::block> return_sort_3D(Choco3D::stock& stock, std::string& sort_by) {
            
        }
        void transfer_stock(Choco3D::stock& stock, Chocolite::container& new_container) {
            
        }
    };

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
    
    Chocolite::container load_container(std::string container);
    void unload_container(std::string container, int dimension);

};

#endif