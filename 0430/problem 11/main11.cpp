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
	stack << 3 << 5 << 10; //순서대로 푸시
	while (true) {
		if (!stack) break; //스택 empty
		int x;
		stack >> x; // 스택의 탑에 있는 정수 팝
		cout << x << ' ';
	}
	cout << endl;
}


/*
출력 : 10 5 3
*/