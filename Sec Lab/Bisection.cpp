#include <bits/stdc++.h>
#define f(x) x *x + x - cos(x)
using namespace std;
void bisectionMethod(double x1, double x2, double y1, double y2, double err)
{
    double mid, ymid;
    int step = 1;
    cout << "\nStep\tx1\t\tx2\t\tmid\t\tf(mid)" << endl; //for generating table 
    do
    {
        mid = (x1 + x2) / 2; //finding average
        ymid = f(mid);       //finding f(c)
        cout << setprecision(6) << fixed;
        cout << step << "\t" << x1 << "\t" << x2 << "\t" << mid << "\t" << ymid << endl;
        if ((ymid * y2) < 0)
        {
            x1 = mid;
            y1 = ymid;
        }
        else
        {
            x2 = mid;
            y2 = ymid;
        }
        step++;
    }
    while (abs(ymid) > err)
        ;
    cout << "\nRoot of the equation is " << mid << endl;
}
int main()
{
    double x1, x2, y1, y2;
    while (true)
    {
        cout <<"Enter two initial values of x between which the root lies ";
            cout<< "(First lesser and then the greater value): ";
        cin >> x1 >> x2;
        y1 = f(x1);
        y2 = f(x2);
        if ((y1 * y2) >= 0)
        {
            cout << "Root does not lie between " << x1 << " and " <<

                x2 << endl;
            cout << "Try Again!" << endl;
        }
        else if (x1 > x2)
        {
            cout << "Please enter the lesser value first and then the greater value " << endl;
        }
        else
            break;
    }
    double err;
    cout << "Enter tolerable error: ";
    cin >> err;
    bisectionMethod(x1, x2, y1, y2, err);
}