#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int r=0) { this->radius=r; }
	friend Circle& operator + (int r, Circle& a);
	void show() { cout << "raidus = " << radius << "ÀÎ ¿ø" << endl; }
};

Circle& operator + (int r, Circle& a) {
	Circle tmp;
	tmp.radius = r + a.radius;
	return tmp;
}

int main() {
	Circle a(5), b(4);
	b = 1 + a;
	a.show();
	b.show();
}