#include "noisy.hpp"

struct foo {
  const noisy& n;

  foo() : n(noisy(3)) {}
};

int main() {
  const auto& x = foo();
  std::cout << x.n << "\n";
}
