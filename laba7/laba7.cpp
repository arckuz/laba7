#include "Header.h"
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите номер алгоритма 1-10, или введите 11, чтобы вывести все алгоритмы: ";
    int N;
    cin >> N;
    cout << endl;
    switch (N)
    {
    case(1):
        z1();
        break;
    case(2):
        z2();
        break;

    case(3):
        z3();
        break;

    case(4):
        z4();
        break;

    case(5):
        z5();
        break;

    case(6):
        z6();
        break;

    case(7):
        z7();
        break;

    case(8):
        z8();
        break;

    case(9):
        z9();
        break;

    case(10):
        z10();
        break;

    case(11):
        z1();
        z2();
        z3();
        z4();
        z5();
        z6();
        z7();
        z8();
        z9();
        z10();
        break;
    default:
        cout << "Введена не корректная команда";
    }
    
}

