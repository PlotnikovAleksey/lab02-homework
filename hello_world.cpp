#include <iostream>
#include <string>

int main
{
  string name; //имя
  getline(std::cin, name);
  std::cout << "Hello world from " << name;
  return 0;
}
