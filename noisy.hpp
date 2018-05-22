#include <iostream>

struct noisy {
	noisy(int x) : x(x) { std::cout << "noisy()\n"; }
	~noisy() { std::cout << "~noisy()\n"; }

	int x;

	friend std::ostream& operator<<(std::ostream& os, noisy const& n) {
		return os << "NOISY! " << n.x;
	}
};
