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
// Circle의 객체를 넣고 크기를 비교하면, 반지름의 크기가 비교되지 못함. 또한, 객체의 크기는 비교될 수 없음.
// 중복함수는 템플릿함수보다 우선되므로, 중복함수를 작성해준다.

template <class T>
T bigger(T a, T b) {
	if (a > b) return a;
	else return b;
}

int main() {
	int a = 20, b = 50, c;
	c = bigger(a, b);
	cout << "20과 50 중 큰 값은 " << c << endl;
	Circle waffle(10), pizza(20), y;
	y = bigger(waffle, pizza);
	cout << "waffle과 pizza 중 큰 것의 반지름은 " << y.getRadius() << endl;
}