#pragma once
#ifndef cl_query_functions_hpp
#define cl_query_functions_hpp

#include <chocolite.hpp>

namespace CLExecute {
    void __finalise(CLQuery::finalise& finalise);
    void __pick(CLQuery::pick& pick);
    void __wipe(CLQuery::wipe& wipe);
    void __build(CLQuery::build& build);
    void __insert(CLQuery::insert& insert);
    void __obfuscate(CLQuery::obfuscate& obfuscate);
    void __add_header(CLQuery::add_header& add_header);
    void __lock(CLQuery::lock& lock);
    void __push(CLQuery::push& push);
    void __grab(CLQuery::grab& grab);
    void __grab_range(CLQuery::grab_range& grab_range);
    void __make(CLQuery::make& make);
    void __make_fixed(CLQuery::make_fixed& make_fixed);
    void __erase(CLQuery::erase& erase);
    void __erase_range(CLQuery::erase_range& erase_range);
    void __remove(CLQuery::remove& remove);
}

#endif