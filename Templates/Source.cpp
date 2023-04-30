#include <iostream>

template<typename T>
T half(T a) {
	return a / 2;
}

int half(int);

int main() {
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	std::cout << half(a) << '\n';
	std::cout << half(b) << '\n';
	std::cout << half(c) << '\n';
}

int half(int a) {
	float aFloat = static_cast<float>(a);
	return round(aFloat / 2);
}
