#include<iostream>
#include<math.h>

using namespace std;

int main() {

    setlocale(LC_ALL, "RUSSIAN");

    float x, y, r1, r2, f1;
    float f = 0;

    cout << "Введите Х: "; cin >> x;
    cout << "Введите Y: "; cin >> y;

    r1 = sqrt(x * x + y * y);
    cout << r1 << endl;
    f1 = acos(x / sqrt(x * x + y * y));
    cout << f1;

    while(f < 360) {
        r2 = sin(2 * f);
        if (abs(r2) >= abs(r1) && f1 == f) {
            cout << "Точка попадает в фигуру" << endl;
            break;
        }
        else {
            if (f == 360) {
                cout << "Точка не принадлежит фигуре" << endl;
            }
            else {
                f = f + 1;
            }
        }
    }

}