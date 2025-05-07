#include <iostream>
using namespace std;

class Color {
	int red, green, blue;
public:
	Color() { red = green = blue = 0; }
	Color(int r, int g, int b) { red = r; green = g; blue = b; }
	void setColor(int r, int g, int b) { red = r; green = g; blue = b; }
	void show() { cout << red << ' ' << green << ' ' << blue << endl; }
	friend bool operator == (Color op1, Color op2);
	friend Color& operator + (Color& color, Color op2);
};

bool operator == (Color op1, Color op2) {
	if (op1.red == op2.red && op1.green == op2.green && op1.blue == op2.blue) return true;
	else return false;
}

Color& operator + (Color& color, Color op2) {
	Color tmp;
	tmp.red = color.red + op2.red;
	tmp.green = color.green + op2.green;
	tmp.blue = color.blue + op2.blue;
	return tmp;
}

int main() {
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();

	Color fuchsia(255, 0, 255);
	if (c == fuchsia)
		cout << "보라색 맞음";
	else
		cout << "보라색 아님";
}