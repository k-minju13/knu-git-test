#include<iostream>
#include "AirLine.h"
using namespace std;

int main() {
    AirlineBook* air = new AirlineBook();
    cout << "***** 한성항공에 오신것을 환영합니다 *****\n\n";
    air->start();
    delete air;
}