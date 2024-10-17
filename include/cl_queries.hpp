#pragma once
#ifndef cl_queries_hpp
#define cl_queries_hpp

#include <chocolite.hpp>

namespace CLQueries {
    struct push2D {
        // PUSH {data} TO {table} IN {container} AT {x,y}
        std::string data;
        std::string container;
        std::string table;
        int x;
        int y;
    };
    struct push3D {
        // PUSH {data} TO {table} IN {container} AT {x,y,z}
        std::string data;
        std::string container;
        std::string table;
        int x;
        int y;
        int z;
    };
    struct pick2D {
        // PICK {data} FROM {table} IN {container}
        std::string data;
        std::string container;
        std::string table;
    };
    struct pick3D {
        // PICK {data} FROM {table} IN {container}
        std::string data;
        std::string container;
        std::string table;
    };
    struct grab2D {
        // GRAB DATA ON {x,y} FROM {table} IN {container}
        std::string container;
        std::string table;
        int x;
        int y;
    };
    struct grab3D {
        // GRAB DATA ON {x,y,z} FROM {table} IN {container}
        std::string container;
        std::string table;
        int x;
        int y;
        int z;
    };
    struct make2D {
        // MAKE {table} WITH HEADERS {headers}
        std::string name;
        std::vector<std::string> headers;
    };
    struct make3D {
        // MAKE {stock} WITH HEADERS ({2D headers}, {3D headers})
        std::string name;
        std::vector<std::string> headers_2d;
        std::vector<std::string> headers_3d;
    };
    struct insert2D {
        // INSERT {table} INTO {container} AT POSITION {int}
        Choco2D::table table;
        Choco2D::container container;
        int pos;
    };
    struct insert3D {
        // INSERT {stock} INTO {container} AT POSITION {int}
        Choco3D::stock stock;
        Choco3D::container container;
        int pos;
    };
    struct erase2D {
        // ERASE DATA FROM {x, y} ON {table} IN {container}
        Choco2D::container container;
        Choco2D::table table;
        int x;
        int y;
    };
    struct erase3D {
        // ERASE DATA FROM {x, y, z} ON {table} IN {container}
        Choco3D::container container;
        Choco3D::stock stock;
        int x;
        int y;
        int z;
    };
    struct wipe2D {
        // WIPE {table} IN {container}
        Choco2D::container container;
        Choco2D::table table;
    };
    struct wipe3D {
        // WIPE {stock} IN {container}
        Choco3D::container container;
        Choco3D::stock stock;
    };
}

#endif