#pragma once
#ifndef cl_4d_hpp
#define cl_4d_hpp

#include <chocolite.hpp>

namespace Choco4D {
    struct shard {
        int x; int y; int z; int w;
        std::string data_type;
        std::any content;
        shard(int x = 0, int y = 0, int z = 0, std::string data_type = "", std::any content = "") :
            x(x), y(y), z(z), data_type(data_type), content(content) {}
        ~shard() {}
    };
    class tesseract {
    private:
        int pos;
        std::string name;
        std::vector<Choco4D::shard> shards;
        std::vector<std::string> headers_2d;
        std::vector<std::string> headers_3d;
        std::vector<std::string> headers_4d;
    public:
        tesseract(std::string name = "", std::vector<Choco4D::shard> shards = {}) :
            name(name), shards(shards) {
                // Read if there are any existing tesseracts in container,
                // count one for any found, then pos++
            }
        std::any read_from_shard(int x, int y, int z, int w) {
            
        }
        Choco4D::shard find_shard_from_data(std::any content) {

        }
        void insert_data_to_shard(Choco4D::shard& shard, int x, int y, int z, int w, std::any content) {

        }
        void remove_data_from_shard(Choco4D::shard& shard, int x, int y, int z, int w){
            
        }
        void move_data_between_shards(Choco4D::shard& source, Choco4D::shard& destination, std::optional<bool> overwrite = std::nullopt) {
            
        }
        void shift_data(char coordinate, int origin, int offset) {
            // Will shift data depending on coordinate and offset.
            // -x = left; +x = right. -y = up, +y = down.
            // -z = nearer, +z = farther. -w = shallower, +w = deeper.
        }
        void add_header(Choco4D::tesseract& tesseract, std::string header, int dimension) {
            
        }
        void remove_header(Choco4D::tesseract& tesseract, std::string header, int dimension) {
            
        }
    };
}

#endif