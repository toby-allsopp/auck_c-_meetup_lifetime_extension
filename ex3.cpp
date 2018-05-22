#include "noisy.hpp"

struct foo {
  const noisy& n;

  //foo(const noisy& n) : n(n) {}
};

int main() {
  const auto& x = foo{noisy(3)};
  std::cout << x.n << "\n";
}
