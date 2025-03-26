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
	cout << "사각형 길이 ";
	cin >> rect.width;
	cout << "\n사각형 너비 ";
	cin >> rect.height;
	cout << "\n사각형 두꼐 ";
	cin >> rect.thickness;
	cout << "\n사각형의 면적은 " << rect.getVolume() << endl;
}