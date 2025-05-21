#ifndef ORGATE_H
#define ORGATE_H
#include "AbstractGate.h"
#include <iostream>
using namespace std;
class ORGate : public AbstractGate {
public:
	bool operation() { return x | y; }
};
#endif