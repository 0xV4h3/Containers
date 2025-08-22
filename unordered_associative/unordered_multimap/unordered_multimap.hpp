#pragma once
#include "hash_table.hpp"

namespace vahe {

    template <
        typename Key,
        typename Value,
        typename Hash = std::hash<Key>,
        typename KeyEqual = std::equal_to<Key>
    >
    class unordered_multimap {
        using table_type = hash_table<
            std::pair<const Key, Value>,
            pair_key<Key, Value>,
            Hash,
            KeyEqual,
            true
        >;
        table_type table_;
    };

}
