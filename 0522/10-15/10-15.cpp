#include <iostream>
#include <vector>
using namespace std;

class Circle {
	string name;
	int radius;
public:
	Circle(int radius, string name) {
		this->radius = radius; this->name = name;
	}
	double getArea() { return 3.14 * radius * radius; }
	string getName() { return name; }
};

int main() {
	vector<Circle*> v;
	int radius;
	string name;
	cout << "���� �����ϰ� �����ϴ� ���α׷��Դϴ�." << endl;
	while (1) {
		int n;
		cout << "����:1, ����:2, ��κ���:3, ����:4 >> ";
		cin >> n;
		if (n == 1) {
			cout << "�����ϰ��� �ϴ� ���� �������� �̸��� >> ";
			cin >> radius >> name;
			v.push_back(new Circle(radius, name));
		}
		else if (n == 2) {
			cout << "�����ϰ��� �ϴ� ���� �̸��� >> ";
			cin >> name;

			bool found = false;
			for (auto it = v.begin(); it != v.end(); ) {
				if ((*it)->getName() == name) {
					delete* it;
					it = v.erase(it);
					found = true;
				}
				else {
					++it;
				}
			}

			if (!found) {
				cout << "�ش� �̸��� ���� �����ϴ�." << endl;
			}
		}
		else if (n == 3) {
			for (int i = 0; i < v.size(); i++) {
				cout << v[i]->getName() << endl;
			}
			cout << endl;
		}
		else if (n == 4)
			break;
		else
			cout << "�߸� �Էµ� �����Դϴ�" << endl;
	}
}