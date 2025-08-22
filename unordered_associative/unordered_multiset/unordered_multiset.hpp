#pragma once
#include "hash_table.hpp"

namespace vahe {

    template <
        typename Key,
        typename Hash = std::hash<Key>,
        typename KeyEqual = std::equal_to<Key>
    >
    class unordered_multiset {
        using table_type = hash_table<
            Key,
            identity_key<Key>,
            Hash,
            KeyEqual,
            true
        >;
        table_type table_;
    };

}
