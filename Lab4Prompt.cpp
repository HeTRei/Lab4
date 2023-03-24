#include <iostream>
#include <cmath>
#include <conio.h>
#include <iomanip>
using namespace std;

double funccalc(double x)
{
    return pow(sin(x / 2), 3);
}

int main()
{
    double a, b, dx, integrl;
    int n;

    char restart = 'r';
    while (restart == 'r' or restart == 'r')
    {
        cout << "enter a: ";
        cin >> a;
        cout << "b: ";
        cin >> b;
        cout << "n: ";
        cin >> n;
        if (cin.fail() or n < 1)
        {
            cout << "incorrect value! should be a number that is greater than or equal to 1, but not greater than 9223372036854775807. exiting the program";
            exit(1);
        }

        dx = (b - a) / n;

        integrl = 0;

        for (int i = 0; i < n; i++) 
        {
            double x = a + i * dx;

            double f = funccalc(x);

            integrl += f * dx;
        }

        cout << "the integral is: " << fixed << setprecision(4) << integrl << endl;

        cout << "press r to restart, any other key to exit" << endl;
        restart = _getch();
    }

    return 0;
}