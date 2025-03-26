#include <iostream>
#include <cstdlib>
#include <ctime>
#define RAND_MAX 32767
using namespace std;

class SelectableRandom {
public:
	SelectableRandom();
	int next();
	int nextInRange(int a, int b);
};

SelectableRandom::SelectableRandom() {
	srand((unsigned)time(0));
}

int SelectableRandom::next() {
	int n = rand();
	return n;
}

int SelectableRandom::nextInRange(int a, int b) {
	int n = rand() % (b - a + 1) + a;
	return n;
}

int main() {
	SelectableRandom r;
	cout << "--0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		if (n % 2 == 0) {
			cout << n << ' ';
		}
	}
	cout << endl << endl << "--2에서 " << "10 까지의 랜덤 정수 10개 --" << endl;
	for (int i = 0; i < 11; i++) {
		int n = r.nextInRange(2, 10);
		if (n % 2 == 0) {
			cout << n << ' ';
		}
	}
	cout << endl;
}