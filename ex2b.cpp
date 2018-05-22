#include "noisy.hpp"

bool operator<(const noisy& lhs, const noisy& rhs) {
  return lhs.x < rhs.x;
}

template <typename T>
T max(T&& x, T&&y) {
  return x < y ? std::forward<T>(y) : std::forward<T>(x); 
}

int main() {
  const auto& x = max(noisy(3), noisy(4));
  std::cout << x << "\n";
}
