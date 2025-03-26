#include <iostream>
#include <string>
using namespace std;

class Date {
	int year;
	int month;
	int day;
public:
	Date(string date);
	Date(int a, int b, int c);
	int getYear();
	int getMonth();
	int getDay();
	void show();
};

Date::Date(int a, int b, int c) {
	year = a;
	month = b;
	day = c;
}

Date::Date(string date) {
	year = stoi(date);
	int n = date.find('/');

	this->month = stoi(date.substr(n + 1));
	n = date.find('/', n + 1);

	day = stoi(date.substr(n + 1));

}

int Date::getYear() {
	return year;
}

int Date::getMonth() {
	return month;
}

int Date::getDay() {
	return day;
}

void Date::show() {
	cout << year << "³â" << month << "¿ù" << day << "ÀÏ" << endl;
}


int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}
