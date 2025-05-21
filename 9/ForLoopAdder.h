#ifndef FORLOOPADDER_H
#define FORLOOPADDER_H
#include <iostream>
using namespace std;

class ForLoopAdder : public LoopAdder {
public:
	ForLoopAdder(string name="") : LoopAdder(name) {};
	int calculate() {
		int sum = 0;
		for (int i = getX(); i <= getY(); i++)
			sum += i;
		return sum;
	}
};
#endif