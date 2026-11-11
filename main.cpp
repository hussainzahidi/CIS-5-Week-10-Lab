#include <iostream>

// Lab 10 — Hussain
// CIS 5 Week 10 · References & pointers

using std::cout;
using std::endl;

void swap_values(int& a, int& b) {
	// TODO
	int t = a;
	a = b;
	b = t;
}

int main() {
	int x = 3, y = 7;
	cout << "Before: " << x << " " << y << endl;

	// TODO: swap_values(x, y);
	swap_values(x, y);
	cout << "After: " << x << " " << y << endl;

	// TODO: pointer walkthrough with int* p = &x;
	int* p = &x;
	cout << "At memory address " << p
		<< " is " << *p << "." << endl;
	return 0;
}
