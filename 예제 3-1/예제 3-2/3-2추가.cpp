#include <iostream>
using namespace std;

class Rectangle {
public:
	int width;
	int height;
	int thickness;
	int getArea();
	int getVolume();
};

int Rectangle::getArea() {
	return width * height;
}

int Rectangle::getVolume() {
	return width * height * thickness;
}

int main() {
	Rectangle rect;
	cout << "�簢�� ���� ";
	cin >> rect.width;
	cout << "\n�簢�� �ʺ� ";
	cin >> rect.height;
	cout << "\n�簢�� �β� ";
	cin >> rect.thickness;
	cout << "\n�簢���� ������ " << rect.getVolume() << endl;
}