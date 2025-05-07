#include <iostream>
#include <string>
using namespace std;

class Matrix {
	int m[4];
public:
	Matrix() : Matrix(0, 0, 0, 0) {}
	Matrix(int a, int b, int c, int d) { m[0] = a; m[1] = b; m[2] = c; m[3] = d; }
	void show() {
		cout << "Matrix = { ";
		for (int i = 0; i < 4; i++)
			cout << m[i] << ' ';
		cout << "}" << endl;
	}
	void operator >>(int mat[4]) {
		for (int i = 0; i < 4; i++)
			mat[i] = m[i];
	}
	Matrix& operator <<(int mat[4]) {
		for (int i = 0; i < 4; i++)
			m[i] = mat[i];
		return *this;
	}
};

int main() {
	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4] = { 1,2,3,4 };
	a >> x;
	b << y;

	for (int i = 0; i < 4; i++) cout << x[i] << ' ';
	cout << endl;
	b.show();

	return 0;
}