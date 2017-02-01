#include "pow2.h"
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  std::cout << "pow2(" << argv[1] << ")" << " = " << pow2(std::stod(argv[1])) << std::endl;
  return 0;
}
