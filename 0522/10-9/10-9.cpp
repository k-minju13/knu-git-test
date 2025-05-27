#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	vector<int>::iterator it;
	double n;
	double avg = 0;
	while(1) {
		cout << "정수를 입력하세요(0을 입력하면 종료)>>";
		cin >> n;
		if (n != 0) {
			v.push_back(n);
			for (it = v.begin(); it != v.end(); it++) {
				cout << *it << " ";
			}
			cout << endl;
			double sum = 0;
			for (it = v.begin(); it != v.end(); it++) {
				sum += *it;
				avg = sum / v.size();
			}
			cout << "평균 = " << avg << endl;
		}
		else
			break;
	}
}