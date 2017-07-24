#include "Sortings.hpp"

void main() {
	int a[] = { 2, 3, 4 };
	Sortings::InsertionSort<int>(a, 3);

	double b[] = { 2.0, 1.4, 3.8 };
	Sortings::InsertionSort<double>(b, 3);
}