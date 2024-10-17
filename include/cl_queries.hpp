#pragma once
#ifndef cl_queries_hpp
#define cl_queries_hpp

#include <chocolite.hpp>

namespace CLQuery {
    // 2D queries
    struct push2D {
        // PUSH {data} TO {table} IN {container} AT {x,y}
        std::any data;
        Choco2D::container container;
        Choco2D::table table;
        int x;
        int y;
    };
    struct pick2D {
        // PICK {data} FROM {table} IN {container}
        std::any data;
        Choco2D::container container;
        Choco2D::table table;
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
    struct build2D {
        // BUILD 2D CONTAINER {container}
        std::string name;
    };
    struct make2D {
        // MAKE {table} WITH HEADERS {headers}
        std::string name;
        std::vector<std::string> headers;
    };
    struct insert2D {
        // INSERT {table} INTO {container} AT POSITION {int}
        Choco2D::table table;
        Choco2D::container container;
        int pos;
    };
    struct erase2D {
        // ERASE DATA FROM {x, y} ON {table} IN {container}
        Choco2D::table table;
        Choco2D::container container;
        int x;
        int y;
    };
    struct wipe2D {
        // WIPE {table} IN {container}
        Choco2D::container container;
        Choco2D::table table;
    };

    // 3D queries
    struct push3D {
        // PUSH {data} TO {stock} IN {container} AT {x,y,z}
        std::any data;
        Choco3D::container container;
        Choco3D::stock table;
        int x;
        int y;
        int z;
    };
    struct pick3D {
        // PICK {data} FROM {stock} IN {container}
        std::any data;
        Choco3D::container container;
        Choco3D::stock stock;
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
    struct build3D {
        // BUILD 3D CONTAINER {container}
        std::string name;
    };
    struct make3D {
        // MAKE {stock} WITH HEADERS ({2D headers}, {3D headers})
        std::string name;
        std::vector<std::string> headers_2d;
        std::vector<std::string> headers_3d;
    };
    struct insert3D {
        // INSERT {stock} INTO {container} AT POSITION {int}
        Choco3D::stock stock;
        Choco3D::container container;
        int pos;
    };
    struct erase3D {
        // ERASE DATA FROM {x, y, z} ON {table} IN {container}
        Choco3D::container container;
        Choco3D::stock stock;
        int x;
        int y;
        int z;
    };
    struct wipe3D {
        // WIPE {stock} IN {container}
        Choco3D::container container;
        Choco3D::stock stock;
    };
}

#endif
