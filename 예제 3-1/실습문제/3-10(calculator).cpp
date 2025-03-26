#include <iostream>
using namespace std;

class Add {
	int a;
	int b;
public:
	void setValue(int x, int y);
	int calculate();
};

class Sub {
	int a;
	int b;
public:
	void setValue(int x, int y);
	int calculate();
};

class Mul {
	int a;
	int b;
public:
	void setValue(int x, int y);
	int calculate();
};

class Div {
	int a;
	int b;
public:
	void setValue(int x, int y);
	int calculate();
};


void Add::setValue(int x, int y) {
	a = x;
	b = y;
}
int Add::calculate() {
	return a + b;
}

void Sub::setValue(int x, int y) {
	a = x;
	b = y;
}
int Sub::calculate() {
	return a - b;
}

void Mul::setValue(int x, int y) {
	a = x;
	b = y;
}
int Mul::calculate() {
	return a * b;
}

void Div::setValue(int x, int y) {
	a = x;
	b = y;
}
int Div::calculate() {
	return a / b;
}


int main() {
	Add a;
	Sub s;
	Mul m;
	Div d;
	int x, y;
	char optr;
	while (1) {
		cout << "�� ������ �����ڸ� �Է��ϼ���>>";
		cin >> x >> y >> optr;
		switch (optr) {
			case('+') :
				a.setValue(x, y);
				cout << a.calculate() << endl;
				break;
			case('-'):
				s.setValue(x, y);
				cout << s.calculate() << endl;
				break;
			case('*'):
				m.setValue(x, y);
				cout << m.calculate() << endl;
				break;
			case('/'):
				d.setValue(x, y);
				cout << d.calculate() << endl;
				break;
		}
	}
}