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
	cout << "�԰��� å�� �Է��ϼ���. �⵵�� -1�� �Է��ϸ� �԰� �����մϴ�." << endl;
	while (1) {
		int year;
		string title, author;
		cout << "�⵵>>";
		cin >> year;
		if (year == -1)
			break;
		cin.ignore();

		cout << "å�̸�>>";
		getline(cin, title);

		cout << "����>>";
		getline(cin, author);
		Book a(year, title, author);
		v.push_back(a);
	}
	cout << "�� �԰�� å�� " << v.size() << "���Դϴ�." << endl;
	string Author;
	cout << "�˻��ϰ��� �ϴ� ���� �̸��� �Է��ϼ���>>";
	cin >> Author;
	for (int i = 0; i < v.size(); i++) {
		if (v[i].getAuthor() == Author)
			cout << v[i].getYear() << ", " << v[i].getTitle() << ", " << v[i].getAuthor() << endl;
	}
	int Year;
	cout << "�˻��ϰ��� �ϴ� �⵵�� �Է��ϼ���>>";
	cin >> Year;
	for (int i = 0; i < v.size(); i++) {
		if (v[i].getYear() == Year)
			cout << v[i].getYear() << ", " << v[i].getTitle() << ", " << v[i].getAuthor() << endl;
	}
}