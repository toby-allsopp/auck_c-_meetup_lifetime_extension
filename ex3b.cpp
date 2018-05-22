#include "noisy.hpp"

struct foo {
  const noisy n;
};

int main() {
  const auto& n = foo{noisy(3)}.n;
  std::cout << n << "\n";
}
