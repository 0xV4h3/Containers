#pragma once
#include <functional>
#include "red_black_tree.hpp"

namespace vahe {

    template <typename Key, typename Compare = std::less<Key>>
    class multiset {
        using tree_type = red_black_tree<
            Key,
            identity_key<Key>,
            Compare,
            true
        >;
        tree_type tree_;
    };

}





