#include <iostream>
using namespace std;

template <class T1, class T2>
int biggest(T1 x[], T2 n) {
	int max = x[0];
	for (int i = 0; i < n; i++) {
		if (x[i] > max)
			max = x[i];
	}
	return max;
}

int main() {
	int x1[] = { 1,10,100,5,4 };
	cout << biggest(x1, 5) << endl;

	int x2[] = { 0.1,4,-5,6,8,1000,-100 };
	cout << biggest(x2, 8) << endl;

	int x3[] = { 0.8,0.82,0.99,1.4,-2,2 };
	cout << biggest(x3, 7) << endl;
}