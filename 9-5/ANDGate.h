#ifndef ANDGATE_H
#define ANDGATE_H
#include "AbstractGate.h"
#include <iostream>
using namespace std;
class ANDGate : public AbstractGate {
public:
	bool operation() { return x & y; }
};
#endif