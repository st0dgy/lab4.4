#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double R1 = 0;
    double R2 = 0;
    double x, y, xp, xk, dx;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "R1 = "; cin >> R1;
    cout << "R2 = "; cin >> R2;
    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |";
    cout << setw(10) << "y" << " |" << endl;
    cout << "---------------------------" << endl;
    x = xp;
    while (x <= xk)
    {

        if (x <= -2 * R1)
            y = -R1 * (x + 2 * R1);
        else
            if (-2 * R1 < x && x <= 0)
                y = R1 + sqrt((R1 * R1) - (x * x));
            else
                if (0 < x && x <= 2 * R2)
                    y = -sqrt((R2 * R2) - ((x - R2) * (x - R2)));
                else
                    if (2 * R2 < x && x <= 6)
                        y = (2 * R2 - x) / (6 - 2 * R2);
                    else
                        y = -1;
        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;
        x += dx;
      
    }

    cout << "---------------------------" << endl;
    return 0;
}