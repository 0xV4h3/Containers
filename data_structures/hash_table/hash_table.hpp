#pragma once
#include <functional>

namespace vahe {

    template <typename T>
    struct identity_key {
        using key_type = T;
        const T& operator()(const T& x) const { return x; }
    };

    template <typename Key, typename Value>
    struct pair_key {
        using key_type = Key;
        const Key& operator()(const std::pair<const Key, Value>& x) const { return x.first; }
    };

    template <
        typename T,
        typename KeyExtract,
        typename Hash = std::hash<typename KeyExtract::key_type>,
        typename KeyEqual = std::equal_to<typename KeyExtract::key_type>,
        bool AllowDuplicates = false
    >
    class hash_table {
    public:

    protected:
        KeyExtract key_extract_;
        Hash hash_;
        KeyEqual key_equal_;
    };

}