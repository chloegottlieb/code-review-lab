#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#include "funcs.h"

int main()
{

  // sample code
  std::string result;

  result=greet("Tom");
  std::cout << result <<"\n";
  // Call the functions you wrote in funcs here
  std::string remove;
  remove=removeLeadingSpaces("       int x = 1;  ");
  std::cout << remove << "\n";
  return 0;
}
