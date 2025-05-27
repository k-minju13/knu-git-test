#include <iostream>
using namespace std;

template <class T1, class T2, class T3>
void concat(T1* a, T2 sizea, T3* b, T2 sizeb) {
	auto* c = new double[sizea + sizeb];
	for (int i = 0; i < sizea; i++) {
		c[i] = a[i];
	}
	for (int i = 0; i < sizeb; i++) {
		c[sizea + i] = b[i];
	}
	for (int i = 0; i < sizea + sizeb; i++) {
		cout << c[i] << " ";
	}
	cout << endl;
	delete[] c;
}

int main() {
	int a[] = { 1,5,4,6,8 }; //size=5
	int b[] = { 11,25,83,31 }; //size=4
	double c[] = { 4.1,3.0,5.8,-9.2 }; //size=4
	double d[] = { 6.1,5.2,-0.3 }; //size=3
	concat(a, 5, c, 4);
	concat(c, 4, b, 4);
	concat(b, 4, d, 3);
	concat(d, 3, a, 5);
}