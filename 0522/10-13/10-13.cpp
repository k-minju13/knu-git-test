#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	cout << "****** �������� ���α׷� HIGH SCORE�� �����մϴ� ******" << endl;
	map<string, int> scrm;
	string name;
	int score;
	while (1) {
		int n;
		cout << "�Է�:1, ��ȸ:2, ����:3 >> ";
		cin >> n;
		if (n == 1) {
			cout << "�̸��� ����>> ";
			cin >> name >> score;
			scrm.insert(make_pair(name, score));
		}
		else if (n == 2) {
			cout << "�̸� >> ";
			cin >> name;
			if (scrm.find(name) == scrm.end())
				cout << "�������� �ʴ� ����Դϴ�" << endl;
			else
				cout << name << "�� ������ " << scrm[name] << endl;
		}
		else if (n == 3) {
			cout << "���α׷��� �����մϴ�..." << endl;
			break;
		}
		else
			cout << "���ڸ� �ٽ� �Է��ϼ���." << endl;
	}
	return 0;
}