#include <iostream>
#include <string>
#include <vector>

static void generate_strings_from_tokens(const std::vector<std::string> &tokens, std::size_t n,
                                         std::size_t current_index = 0)
{
  static std::string container;

  if (n == 0)
    return;

  for (const auto token : tokens)
  {
    auto current_token_size = token.length();

    if (current_token_size <= n)
    {
      container.insert(current_index, token);

      for (std::size_t i = 0; i < current_index + current_token_size; ++i)
        std::cout << container[i];

      std::cout << std::endl;

      generate_strings_from_tokens(tokens, n - current_token_size, current_index + current_token_size);
    }
  }
}

int main()
{
  static constexpr std::size_t MaximumLength = 5;

  generate_strings_from_tokens({"00", "101", "111"}, MaximumLength);
}