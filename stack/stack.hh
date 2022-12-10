#include <array>
#include <cstddef>
#include <stdexcept>
#include <string>

namespace Mine
{
    template <typename Type, std::size_t Size>
    class Stack
    {
        std::size_t top;
        std::array<Type, Size + 1> container;

    public:
        Stack() : top{0} {}

        Type pop()
        {
            if (is_empty())
                throw std::runtime_error("Stack underflow");

            return container[top--];
        }

        Type peek() const
        {
            if (is_empty())
                throw std::runtime_error("Stack underflow");

            return container[top];
        }

        void push(const Type &item)
        {
            if (is_full())
                throw std::runtime_error("Stack overflow");

            container[++top] = item;
        }

        bool is_empty() const { return top == 0; }

        bool is_full() const { return top == Size; }
    };
} // namespace Mine
