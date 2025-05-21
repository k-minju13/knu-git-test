#include "Printer.h"
#include <iostream>
using namespace std;

class InkJetPrinter : public Printer {
	int availableInk;
public:
	InkJetPrinter(string mo = "", string me = "", int a = 0, int i = 0) : Printer(mo, me, a) { this->availableInk = i; }
	bool isValidInkJetPrint(int pages) {
		if (availableInk > pages) return true;
		else return false;
	}
	void print(int pages) {
		if (isValidPrint(pages)) {
			if (isValidInkJetPrint(pages)) {
				setPrintedCount(getPrintedCount() + pages);
				setAvailableCount(getAvailableCount() - pages);
				setAvailableInk(getAvailableInk() - pages);
				cout << "����Ʈ�Ͽ����ϴ�" << endl;
			}
			else {
				cout << "��ũ�� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
			}
		}
		else cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
	}
	void show() {
		cout << getModel() << ", " << getManufacturer() << ", ���� ���� " << getAvailableCount() << "��, ���� ��ũ " << getAvailableInk() << endl;
	}
	int getAvailableInk() { return availableInk; }
	void setAvailableInk(int availableInk) { this->availableInk = availableInk; }
};

class LaserPrinter : public Printer {
	int availableToner;
public:
	LaserPrinter(string mo = "", string me = "", int a = 0, int t = 0) : Printer(mo, me, a) { this->availableToner = t; }
	bool isValidLaserPrint(int pages) {
		if (availableToner > pages) return true;
		else return false;
	}
	void print(int pages) {
		if (isValidPrint(pages)) {
			if (isValidLaserPrint(pages)) {
				setPrintedCount(getPrintedCount() + pages);
				setAvailableCount(getAvailableCount() - pages);
				setAvailableToner(getAvailableToner() - pages);
				cout << "����Ʈ�Ͽ����ϴ�" << endl;
			}
			else {
				cout << "��ʰ� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
			}
		}
		else cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
	}
	void show() {
		cout << getModel() << ", " << getManufacturer() << ", ���� ���� " << getAvailableCount() << "��, ���� ��� " << availableToner << endl;
	}
	int getAvailableToner() { return availableToner; }
	void setAvailableToner(int availableToner) { this->availableToner = availableToner; }
};

int main() {
	InkJetPrinter* ink = new InkJetPrinter("Officejet V40", "HP", 5, 10);
	LaserPrinter* laser = new LaserPrinter("SCX-6x45", "�Ｚ����", 3, 20);

	cout << "���� �۵����� 2���� �����ʹ� �Ʒ��� ����" << endl;
	cout << "��ũ�� : ";
	ink->show();
	cout << "������ : ";
	laser->show();

	int printer, paper;
	char ch;
	while (true) {
		cout << endl << "������(1:��ũ��, 2:������)�� �ż� �Է�>>";
		cin >> printer >> paper;
		switch (printer) {
		case 1: ink->print(paper); break;
		case 2: laser->print(paper); break;
		default: break;
		}
		ink->show();
		laser->show();

		cout << "�Լ� ����Ʈ �Ͻðڽ��ϱ�(y/n)>>";
		cin >> ch;
		if (ch == 'n') break;
		else continue;
	}

	return 0;
}