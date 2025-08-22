#pragma once
#include "deque.hpp"

namespace vahe {

    template <typename T, typename Container = vahe::deque<T>>
    class stack {
        public:
            stack() = default;

            void push(const T& value) { container_.push_back(value); }
            void pop() { container_.pop_back(); }
            T& top() { return container_.back(); }
            const T& top() const { return container_.back(); }
            [[nodiscard]] bool empty() const { return container_.empty(); }
            [[nodiscard]] size_t size() const { return container_.size(); }

        private:
            Container container_;
        };

}
