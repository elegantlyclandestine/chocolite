#include <chocolite.hpp>

void Chocolite::load_container(std::string container_name) {
    // Find the container and load it into memory
}

void Chocolite::unload_container(std::string container_name) {
    // Destruct the container here
}

void Chocolite::add_shape_to_container(std::string name, Chocolite::container container) {

}

void Chocolite::remove_shape_from_container(std::string name, Chocolite::container container) {

}

void Chocolite::move_position_of_container(Chocolite::shape& shape, int pos) {

}

void Chocolite::sort_data_on_container(std::string name, std::string &sort_by) {

}

bool Chocolite::shape_exists(std::string name) {

}

void Chocolite::transfer_shape_to_container(std::string name, Chocolite::container& new_container) {

}

Chocolite::element Chocolite::find_element_from_data(std::any content) {

}

Chocolite::shape Chocolite::find_shape_from_data(std::any content) {

}

std::any Chocolite::select_data_from_shape(std::any content, std::optional<bool> unique_only) {

}
