#pragma once
#include <functional>
#include "red_black_tree.hpp"

namespace vahe {

    template <typename Key, typename Compare = std::less<Key>>
    class set {
        using tree_type = red_black_tree<
            Key,
            identity_key<Key>,
            Compare,
            false
        >;
        tree_type tree_;
    };

}

