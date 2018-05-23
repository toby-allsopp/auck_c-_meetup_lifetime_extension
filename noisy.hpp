#include <iostream>

struct noisy {
	noisy(int x) : x(x) { std::cout << this << ": noisy()\n"; }
	noisy(noisy const& o) : x(o.x) { std::cout << this << ": noisy(noisy const&)\n"; }
	noisy(noisy && o) : x(o.x) { std::cout << this << ": noisy(noisy &&)\n"; }
	~noisy() { std::cout << this << ": ~noisy()\n"; }

	int x;

	friend std::ostream& operator<<(std::ostream& os, noisy const& n) {
		return os << &n << ": NOISY! " << n.x;
	}
};
