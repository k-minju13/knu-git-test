#include <iostream>
#include <string>
using namespace std;

class CoffeeMachine {
	int cfe; int wtr; int sgr;
public:
	CoffeeMachine();
	CoffeeMachine(int a, int b, int c);
	int drinkEspresso();
	int drinkAmericano();
	int drinkSugarCoffee();
	void show();
	int fill();
};

CoffeeMachine::CoffeeMachine() : CoffeeMachine(0,0,0) {}

CoffeeMachine::CoffeeMachine(int a, int b, int c) {
	cfe = a;
	wtr = b;
	sgr = c;
}

int CoffeeMachine::drinkEspresso() {
	cfe -= 1;
	wtr -= 1;
	return cfe, wtr;
}

int CoffeeMachine::drinkAmericano() {
	cfe -= 1;
	wtr -= 2;
	return cfe, wtr;
}

int CoffeeMachine::drinkSugarCoffee() {
	cfe -= 1;
	wtr - +2;
	sgr -= 1;
	return cfe, wtr, sgr;
}

void CoffeeMachine::show() {
	cout << "커피 머신 상태, 커피:" << cfe << "\t물:" << wtr << "\t설탕:" << sgr << "\n";
}

int CoffeeMachine::fill() {
	cfe = 10;
	wtr = 10;
	sgr = 10;
	return cfe, wtr, sgr;
}

int main() {
	CoffeeMachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.fill();
	java.show();
}