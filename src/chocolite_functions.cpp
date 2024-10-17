#include <chocolite.hpp>

Choco2D::container Chocolite::load_2d_container(std::string container) {
    Choco2D::container c2d_container;
    if (!fs::exists(container)) return c2d_container;
    // Replace with actual logic, if a 2D container is found
}

Choco3D::container Chocolite::load_3d_container(std::string container) {
    Choco3D::container c3d_container;
    if (!fs::exists(container)) return c3d_container;
    // Replace with actual logic, if a 3D container is found
}