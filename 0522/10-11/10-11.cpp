#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Book {
	int year;
	string title, author;
public:
	Book(int year, string title, string author) {
		this->year = year; this->title = title; this->author = author;
	}
	int getYear() { return year; }
	string getTitle() { return title; }
	string getAuthor() { return author; }
};

int main() {
	vector<Book> v;
	cout << "입고할 책을 입력하세요. 년도에 -1을 입력하면 입고를 종료합니다." << endl;
	while (1) {
		int year;
		string title, author;
		cout << "년도>>";
		cin >> year;
		if (year == -1)
			break;
		cin.ignore();

		cout << "책이름>>";
		getline(cin, title);

		cout << "저자>>";
		getline(cin, author);
		Book a(year, title, author);
		v.push_back(a);
	}
	cout << "총 입고된 책은 " << v.size() << "권입니다." << endl;
	string Author;
	cout << "검색하고자 하는 저자 이름을 입력하세요>>";
	cin >> Author;
	for (int i = 0; i < v.size(); i++) {
		if (v[i].getAuthor() == Author)
			cout << v[i].getYear() << ", " << v[i].getTitle() << ", " << v[i].getAuthor() << endl;
	}
	int Year;
	cout << "검색하고자 하는 년도를 입력하세요>>";
	cin >> Year;
	for (int i = 0; i < v.size(); i++) {
		if (v[i].getYear() == Year)
			cout << v[i].getYear() << ", " << v[i].getTitle() << ", " << v[i].getAuthor() << endl;
	}
}