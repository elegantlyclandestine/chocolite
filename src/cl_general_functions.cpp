#include <chocolite.hpp>

void Chocolite::unload_container(std::string container, Chocolite::data_structure data_structure) {
    switch(data_structure) {
        case TABLE:
            // Find a way to destruct 2D containers
            break;
        case STOCK:
            // Find a way to destruct 3D containers
            break;
        case TESSERACT:
            // Find a way to destruct 4D containers
            break;
        case POLYDIMENSIONAL:
            // Find a way to destruct #D containers
            break;
        default:
            // No valid container
            break;
    }
}