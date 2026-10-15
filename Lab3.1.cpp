#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double x, y, a, b;
    cout << "Введіть значення x: ";
    cin >> x;

    a = 8.7 * pow(x, 3);

    if (x < -3.5)
        b = 2 + pow(x, -4);
    if (x >= -3.5 && x < 1)
        b = tan(fabs((1 + x) / 2));
    if (x >= 1)
        b = sin(pow(x, 2) / 2) - cos(4 * x);
	y = a + b;
	cout << "y (скорочена форма, if) = " << y << endl;

    if (x < -3.5)
        b = 2 + pow(x, -4);
    else if (x >= -3.5 && x < 1)    
        b = tan(fabs((1 + x) / 2));
    else b = sin(pow(x, 2) / 2) - cos(4 * x);
    y = a + b;
    cout << "y (повна форма, if-else) = " << y << endl;

}