#include <iostream>
#include <string>
using namespace std;

class Matrix {
	int m[4];
public:
	Matrix() : Matrix(0, 0, 0, 0) {}
	Matrix(int a, int b, int c, int d) {m[0] = a; m[1] = b; m[2] = c; m[3] = d;}
	void show() {
		cout << "Matrix = { ";
		for (int i = 0; i < 4; i++)
			cout << m[i] << ' ';
		cout << "}" << endl;
	}
	friend void operator >>(Matrix m1, int m2[4]);
	friend Matrix& operator <<(Matrix& m1, int m2[4]);
};

void operator >>(Matrix mat1, int mat2[4]) {
	for (int i = 0; i < 4; i++)
		mat2[i] = mat1.m[i];
}
Matrix& operator <<(Matrix& mat1, int mat2[4]) {
	for (int i = 0; i < 4; i++)
		mat1.m[i] = mat2[i];
	return mat1;
}

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