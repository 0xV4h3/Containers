#pragma once

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
        typename Compare = std::less<typename KeyExtract::key_type>,
        bool AllowDuplicates = false
    >
    class red_black_tree {
    public:

    protected:
        KeyExtract key_extract_;
        Compare compare_;
    };

}