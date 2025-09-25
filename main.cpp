#include "math.h"
#include <iostream>

int main() {
	int n, m;
	std::cin >> n >> m;	
	std::cout << add(n, m) << std::endl;
	std::cout << multiply(n, m) << std::endl;
	return 0;
}