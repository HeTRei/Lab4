#include <iostream>
#include <cmath>
#include <conio.h>
#include <iomanip>
using namespace std;

double funcCalc(double x)
{
    return pow(sin(x / 2), 3);
}

int main()
{
    double a, b, dx, Integrl;
    int n;

    char restart = 'r';
    while (restart == 'R' or restart == 'r')
    {
        cout << "Enter a: ";
        cin >> a;
        cout << "b: ";
        cin >> b;
        cout << "n: ";
        cin >> n;
        if (cin.fail() or n < 1)
        {
            cout << "Incorrect value! Should be a number that is greater than or equal to 1, but not greater than 9223372036854775807. Exiting the program";
            exit(1);
        }

        dx = (b - a) / n;

        Integrl = 0;

        for (int i = 0; i < n; i++)
        {
            double x = a + i * dx;

            double f = funcCalc(x);

            Integrl += f * dx;
        }

        cout << "The integral is: " << fixed << setprecision(4) << Integrl << endl;

        cout << "Press R to restart, any other key to exit" << endl;
        restart = _getch();
    }

    return 0;
}