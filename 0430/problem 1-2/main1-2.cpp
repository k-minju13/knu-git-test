#include <iostream>
#include <string>
using namespace std;

class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title; this->price = price; this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
	}
	friend Book& operator += (Book& book, int op2);
	friend Book& operator -= (Book& book, int op2);

	string getTitle() { return title; }
};

Book& operator +=(Book& book, int price) {
	book.price += price;
	return book;
}

Book& operator -=(Book& book, int price) {
	book.price -= price;
	return book;
}

int main() {
	Book a("청춘", 20000, 300), b("미래", 30000, 500);
	a += 500;
	b -= 500;
	a.show();
	b.show();
}