#include <iostream>
#include <string>
using namespace std;

class Account {
	string name;
	int id;
	int balance;
public:
	Account();
	Account(string x, int y, int z);
	string getOwner();
	int deposit(int r);
	int withdraw(int r);
	int inquiry();
};

Account::Account() : Account("", 1, 1) {}

Account::Account(string x, int y, int z) {
	name = x;
	id = y;
	balance = z;
}

string Account::getOwner() {
	return name;
}

int Account::deposit(int r) {
	balance += r;
	return balance;
}

int Account::withdraw(int r) {
	balance -= r;
	return balance;
}

int Account::inquiry() {
	return balance;
}

int main() {
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
}