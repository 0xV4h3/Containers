#pragma once
#include "deque.hpp"

namespace vahe {

    template <typename T, typename Container = vahe::deque<T>>
    class queue {
    public:
        void push(const T& value) { container_.push_back(value); }
        void pop() { container_.pop_front(); }
        T& front() { return container_.front(); }
        const T& front() const { return container_.front(); }
        T& back() { return container_.back(); }
        const T& back() const { return container_.back(); }
        [[nodiscard]] bool empty() const { return container_.empty(); }
        [[nodiscard]] size_t size() const { return container_.size(); }

    private:
        Container container_;
    };

}

