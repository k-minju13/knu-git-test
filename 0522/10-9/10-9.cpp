#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	vector<int>::iterator it;
	double n;
	double avg = 0;
	while(1) {
		cout << "������ �Է��ϼ���(0�� �Է��ϸ� ����)>>";
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
			cout << "��� = " << avg << endl;
		}
		else
			break;
	}
}