#include <chocolite.hpp>

// Universal functions
void Chocolite::unload_container(std::string container, int dimension) {
    switch(dimension) {
        case 2:
            // Find a way to destruct 2D containers
            break;
        case 3:
            // Find a way to destruct 2D containers
            break;
        default:
            // No valid container
            break;
    }
}

// 2D functions
Choco2D::container Chocolite::load_2d_container(std::string container) {
    Choco2D::container c2d_container;
    if (!fs::exists(container)) return c2d_container;
    // Replace with actual logic, if a 2D container is found
}

// 3D functions
Choco3D::container Chocolite::load_3d_container(std::string container) {
    Choco3D::container c3d_container;
    if (!fs::exists(container)) return c3d_container;
    // Replace with actual logic, if a 3D container is found
}