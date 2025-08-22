#pragma once
#include <functional>
#include "red_black_tree.hpp"

namespace vahe {

    template <typename Key, typename Value, typename Compare = std::less<Key>>
    class multimap {
        using tree_type = red_black_tree<
            std::pair<const Key, Value>,
            pair_key<Key, Value>,
            Compare,
            true
        >;
        tree_type tree_;
    };

}


