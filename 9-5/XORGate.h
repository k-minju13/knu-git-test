#ifndef XORGATE_H
#define XORGATE_H
#include "AbstractGate.h"
#include <iostream>
using namespace std;
class XORGate : public AbstractGate {
public:
	bool operation() { return x ^ y; }
};
#endif