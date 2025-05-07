#include <iostream>
using namespace std;

class Stack {
	int s[100];
	int top;
public:
	Stack() { top = 0; }
	bool operator ! () {
		if (top == 0) return true;
		else return false;
	}
	Stack& operator << (int z) {
		s[top++] = z;
		return *this;
	}
	Stack& operator >> (int& z) {
		z = s[--top];
		return *this;
	}
};

int main() {
	Stack stack;
	stack << 3 << 5 << 10; //������� Ǫ��
	while (true) {
		if (!stack) break; //���� empty
		int x;
		stack >> x; // ������ ž�� �ִ� ���� ��
		cout << x << ' ';
	}
	cout << endl;
}


/*
��� : 10 5 3
*/