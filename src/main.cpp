#include "pow2.h"
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  std::cout << "pow2(" << argv[0] << " = " pow2(std::stod(argv[0])) << std::endl;
  return 0;
}
