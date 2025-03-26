#include <iostream>
using namespace std;

class Oval {
	int width;
	int height;
public:
	Oval();
	Oval(int w, int h);
	~Oval();
	int getWidth();
	int getHeight();
	int set(int w, int h);
	void show();
};

Oval::Oval() : Oval(1, 1) {};

Oval::Oval(int w, int h) {
	width = w;
	height = h;
}

Oval::~Oval() {
	cout << "Oval ¼Ò¸ê : width = " << width << ", height = " << height << "\n";
}

int Oval::getWidth() {
	return width;
}

int Oval::getHeight() {
	return height;
}

int Oval::set(int w, int h) {
	width = w;
	height = h;
	return w, h;
}

void Oval::show() {
	cout << "width = " << width << ", height = " << height << "\n";
}

int main() {
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << "," << b.getHeight() << endl;
}