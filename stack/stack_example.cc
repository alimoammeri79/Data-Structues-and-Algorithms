#include <iostream>
#include <string>

#include "stack.hh"

int main()
{
  {
    Mine::Stack<int, 2> stack_of_ints;

    stack_of_ints.push(8);
    stack_of_ints.push(2);

    std::cout << stack_of_ints.pop() << std::endl;
    std::cout << stack_of_ints.pop() << std::endl;
  }

  {
    Mine::Stack<std::string, 2> stack_of_strings;

    stack_of_strings.push("First");
    stack_of_strings.push("Second");

    std::cout << stack_of_strings.pop() << std::endl;
    std::cout << stack_of_strings.pop() << std::endl;
  }

  return 0;
}