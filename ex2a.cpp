#include "noisy.hpp"

bool operator<(const noisy& lhs, const noisy& rhs) {
  return lhs.x < rhs.x;
}

int main() {
  const auto& x = std::max(noisy(3), noisy(4));
  std::cout << x << "\n";
}
