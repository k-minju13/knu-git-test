#ifndef WONTODOLLAR_H
#define WONTODOLLAR_H
#include "Converter.h"
#include <iostream>
using namespace std;

class WonToDollar : public Converter {
public:
	WonToDollar() {};
	WonToDollar(double ratio = 0.0) : Converter(ratio) {}
	double convert(double src) { return src / ratio; }
	string getSourceString() { return "¿ø"; }
	string getDestString() { return "´Þ·¯"; }
};
#endif