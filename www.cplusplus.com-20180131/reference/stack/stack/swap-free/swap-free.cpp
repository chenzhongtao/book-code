// swap stacks
#include <iostream>       // std::cout
#include <Stack>          // std::stack, std::swap(stack)

int main ()
{
  std::stack<int> foo,bar;
  foo.push (10); foo.push(20); foo.push(30);
  bar.push (111); bar.push(222);

  swap(foo,bar);

  std::cout << "size of foo: " << foo.size() << '\n';
  std::cout << "size of bar: " << bar.size() << '\n';

  return 0;
}

