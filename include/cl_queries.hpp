#pragma once
#ifndef cl_queries_hpp
#define cl_queries_hpp

#include <chocolite.hpp>

namespace CLQuery {
    /*
      * 2D queries
      * Handles 2D (table) database operations.
      * Accepts objects in the Choco2D namespace.
    */
    struct push2D {
        // PUSH {data} TO {table} IN {container} AT {x,y}
        std::any data;
        Choco2D::container container;
        Choco2D::table table;
        int x;
        int y;
    };
    struct grab2D {
        // GRAB DATA ON {x,y} FROM {table} IN {container}
        Choco2D::container container;
        Choco2D::table table;
        int x;
        int y;
    };
    struct grab_range2D {
        // GRAB DATA RANGE FROM {x1,y1} TO {x2,y2} FROM {table} IN {container}
        Choco2D::container container;
        Choco2D::table table;
        int x1; int y1;
        int x2; int y2;
    };
    struct make2D {
        // MAKE {table} WITH HEADERS {headers}
        std::string name;
        std::vector<std::string> headers;
    };
    struct erase2D {
        // ERASE DATA FROM {x, y} ON {table} IN {container}
        Choco2D::table table;
        Choco2D::container container;
        int x;
        int y;
    };

    /*
      * 3D queries
      * Handles 3D (cuboid) database operations.
      * Takes objects in the Choco3D namespace.
    */
    struct push3D {
        // PUSH {data} TO {stock} IN {container} AT {x,y,z}
        std::any data;
        Choco3D::container container;
        Choco3D::stock table;
        int x;
        int y;
        int z;
    };
    struct grab3D {
        // GRAB DATA ON {x,y,z} FROM {table} IN {container}
        Choco3D::container container;
        Choco3D::stock table;
        int x;
        int y;
        int z;
    };
    struct grab_range3D {
        // GRAB DATA RANGE FROM {x1,y1,z1} TO {x2,y2,z2} FROM {table} IN {container}
        Choco3D::container container;
        Choco3D::stock table;
        int x1; int y1; int z1;
        int x2; int y2; int z2;
    };
    struct make3D {
        // MAKE {stock} WITH HEADERS ({2D headers}, {3D headers})
        std::string name;
        std::vector<std::string> headers_2d;
        std::vector<std::string> headers_3d;
    };
    struct erase3D {
        // ERASE DATA FROM {x, y, z} ON {table} IN {container}
        Choco3D::container container;
        Choco3D::stock stock;
        int x;
        int y;
        int z;
    };
}

#endif
