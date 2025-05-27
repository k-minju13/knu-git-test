#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

template <class T>
void reverseArray(T* data, int n) {
	T temp;
	for (int i = 0; i < n / 2; i++) {
		temp = data[i];
		data[i] = data[n - i - 1];
		data[n - i - 1] = temp;
	}
}

int main() {
	int x[] = { 1, 10, 100, 5, 4 };
	reverseArray(x, 5);
	for (int i = 0; i < 5; i++) cout << x[i] << " ";
	return 0;
}