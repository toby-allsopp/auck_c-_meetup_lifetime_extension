#include "noisy.hpp"

template <typename T>
const T& passthrough(const T& x) {
  return x;
}

int main() {
  const auto& x = passthrough(noisy(3));
  std::cout << x << "\n";
}
