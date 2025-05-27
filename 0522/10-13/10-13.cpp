#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	cout << "****** 점수관리 프로그램 HIGH SCORE을 시작합니다 ******" << endl;
	map<string, int> scrm;
	string name;
	int score;
	while (1) {
		int n;
		cout << "입력:1, 조회:2, 종료:3 >> ";
		cin >> n;
		if (n == 1) {
			cout << "이름과 점수>> ";
			cin >> name >> score;
			scrm.insert(make_pair(name, score));
		}
		else if (n == 2) {
			cout << "이름 >> ";
			cin >> name;
			if (scrm.find(name) == scrm.end())
				cout << "존재하지 않는 사람입니다" << endl;
			else
				cout << name << "의 점수는 " << scrm[name] << endl;
		}
		else if (n == 3) {
			cout << "프로그램을 종료합니다..." << endl;
			break;
		}
		else
			cout << "숫자를 다시 입력하세요." << endl;
	}
	return 0;
}