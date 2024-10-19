#include <chocolite.hpp>

std::vector<std::string> parse_query(std::string stream) {

}

Chocolite::query check_query(std::vector<std::string> tokenised_stream) {
    // Add logic to check syntax. You're going to need to tokenise the queries.
}

void parse_query(std::vector<std::string> tokenised_stream) {
    switch(check_query(tokenised_stream)) {
        case Chocolite::query::FINALISE:

            break;
        case Chocolite::query::PICK:

            break;
        case Chocolite::query::WIPE:

            break;
        case Chocolite::query::BUILD:

            break;
        case Chocolite::query::INSERT:

            break;
        case Chocolite::query::OBFUSCATE:

            break;
        case Chocolite::query::ADD_HEADER:

            break;
        case Chocolite::query::LOCK:

            break;
        case Chocolite::query::PUSH:

            break;
        case Chocolite::query::GRAB:

            break;
        case Chocolite::query::GRAB_RANGE:

            break;
        case Chocolite::query::MAKE:

            break;
        case Chocolite::query::MAKE_FIXED:

            break;
        case Chocolite::query::ERASE:

            break;
        case Chocolite::query::ERASE_RANGE:

            break;
        case Chocolite::query::REMOVE:
        
            break;
    }
}