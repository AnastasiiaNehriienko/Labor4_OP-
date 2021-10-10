#include <iostream>
//Дано натуральне n, дійсні a, b (a!=b). Отримати послідовність r1, r2, ..., rn, де ri=a+ih, h=(b-a)/n

int main() {
	int n;
	float a, b, r;
	std::cout << "Enter n (amount of numbers in the sequence): ";
	std::cin >> n;
	std::cout << "Enter a: ";
	std::cin >> a;
	std::cout<<"Enter b (not equal a): ";
	std::cin >> b;
	for (int i = 1; i <= n; i++) {
		r = a + i * (b - a) / n;
		std::cout << r;
		if (i != n)
			std::cout << ", ";
		else
			break;
	}
	return 0;
	system("pause");
}