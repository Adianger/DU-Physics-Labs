#include <bits/stdc++.h>
using namespace std;
double fun(double x)
{
    return x - tan(x); //define function
}
double derivFunc(double x)
{
    return 1 - ((1 / cos(x)) * (1 / cos(x))); //derivative of the function
}
int main()
{
    double xn, h, xn1, epsilon;
    cout << "Initial Value is : " << endl;
    cin >> xn;
    cout << "Enter the accuracy needed in the result: " << endl;
    cin >> epsilon;
    cout << "\txn1(Root)\txn \th " << endl;
    h = fun(xn) / derivFunc(xn);
    xn1 = xn - h;                    //calcculating first xn+1 value as xn-[f(n)]
    while (abs(xn1 - xn) >= epsilon) //abs is define to take the absolute value
    {
        xn = xn1; // calculating the value of xn by new value xn+1
        h = fun(xn) / derivFunc(xn);
        xn1 = xn - h; // calculating the next xn+1 value
        cout << "\t " << xn1 << "\t " << xn << "\t " << h << endl;
    }
    return 0;
}