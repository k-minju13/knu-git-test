#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class SelectableRandom {
public:
    SelectableRandom();
    int Odd();
    int Even();
    int next();
    int nextInRange(int a, int b);
};

SelectableRandom::SelectableRandom() {
    srand((unsigned)time(0));
}

int SelectableRandom::Odd() {
    int n;
    do {
        n = rand();
    } while (n % 2 == 0);
    return n;
}

int SelectableRandom::Even() {
    int n;
    do {
        n = rand();
    } while (n % 2 != 0);
    return n;
}

int SelectableRandom::next() {
    return rand();
}

int SelectableRandom::nextInRange(int a, int b) {
    return rand() % (b - a + 1) + a;
}

void printRandomNumbers(SelectableRandom& r, string type, int lower, int upper) {
    if (type == "Â¦¼ö") {
        cout << "--" << lower << "¿¡¼­ " << upper << "±îÁöÀÇ Â¦¼ö ·£´ý Á¤¼ö 10°³--" << endl;
        for (int i = 0; i < 10; i++) {
            int num;
            do {
                num = r.nextInRange(lower, upper);
            } while (num % 2 != 0);
            cout << num << ' ';
        }
    }
    else if (type == "È¦¼ö") {
        cout << "--" << lower << "¿¡¼­ " << upper << "±îÁöÀÇ È¦¼ö ·£´ý Á¤¼ö 10°³--" << endl;
        for (int i = 0; i < 10; i++) {
            int num;
            do {
                num = r.nextInRange(lower, upper);
            } while (num % 2 == 0);
            cout << num << ' ';
        }
    }
    cout << endl;
}

int main() {
    SelectableRandom r;
    string slt1, slt2;

    cout << "¼±ÅÃÇÏ½Ã¿À. (Â¦¼ö/È¦¼ö Â¦¼ö/È¦¼ö): ";
    cin >> slt1 >> slt2;

    printRandomNumbers(r, slt1, 0, RAND_MAX);

    printRandomNumbers(r, slt2, 2, 9);

    return 0;
}
