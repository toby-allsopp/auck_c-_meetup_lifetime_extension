#include "noisy.hpp"

int main() {
  noisy&& x = noisy(3);
  std::cout << x << "\n";
}
