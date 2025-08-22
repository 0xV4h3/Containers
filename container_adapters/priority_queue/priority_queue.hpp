#pragma once
#include "vector.hpp"
#include <functional>

namespace vahe {

    template <
    typename T,
    typename Container = vahe::vector<T>,
    typename Compare = std::less<T>
    >
    class priority_queue {
    public:
        priority_queue() = default;

        void push(const T& value) {
            container_.push_back(value);
            std::push_heap(container_.begin(), container_.end(), comp_);
        }
        void pop() {
            std::pop_heap(container_.begin(), container_.end(), comp_);
            container_.pop_back();
        }
        T& top() { return container_.front(); }
        const T& top() const { return container_.front(); }
        [[nodiscard]] bool empty() const { return container_.empty(); }
        [[nodiscard]] size_t size() const { return container_.size(); }

    private:
        Container container_;
        Compare comp_;
    };

}

