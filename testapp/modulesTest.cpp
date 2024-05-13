#include <iostream>
#include <typeindex>

#include "test.h"

import test.modules;


int main()
{
  std::cout << "Hello World!\n";

  std::cout << addOne(12) << std::endl;
  myFunction();
  const auto test = createTest();
  std::cout << std::type_index(typeid(&test)).hash_code();
  const auto text = test->toString();
  std::cout << text << std::endl;
}
