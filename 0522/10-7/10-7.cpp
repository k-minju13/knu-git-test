#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 1) { this->radius = radius; }
	int getRadius() { return radius; }
};

Circle bigger(Circle a, Circle b) {
	if (a.getRadius() > b.getRadius()) return a.getRadius();
	else return b.getRadius();
}
// Circle�� ��ü�� �ְ� ũ�⸦ ���ϸ�, �������� ũ�Ⱑ �񱳵��� ����. ����, ��ü�� ũ��� �񱳵� �� ����.
// �ߺ��Լ��� ���ø��Լ����� �켱�ǹǷ�, �ߺ��Լ��� �ۼ����ش�.

template <class T>
T bigger(T a, T b) {
	if (a > b) return a;
	else return b;
}

int main() {
	int a = 20, b = 50, c;
	c = bigger(a, b);
	cout << "20�� 50 �� ū ���� " << c << endl;
	Circle waffle(10), pizza(20), y;
	y = bigger(waffle, pizza);
	cout << "waffle�� pizza �� ū ���� �������� " << y.getRadius() << endl;
}