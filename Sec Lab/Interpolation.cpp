// Newton forward interpolation
#include <bits/stdc++.h>
using namespace std;

//calculating p mentioned in the formula 
float u_cal(float p, int n)    // p = (x-x0)/h
{
    float temp = p;
    for (int i = 1; i < n; i++)
        temp = temp * (p - i);
    return temp;
}

// calculating factorial of given number n
int fact(int n)
{
    int f = 1;
    for (int i = 2; i <= n; i++)
        f *= i;
    return f;
}

int main()
{
    // Number of values given
    int n = 4;
    float x[] = {12500, 12510, 12520, 12530 };

    // y[][] is used for difference table
    // with y[][0] used for input
    float y[n][n];
    y[0][0] = 111.8034;
    y[1][0] = 111.8401;
    y[2][0] = 111.8928;
    y[3][0] = 111.9375;
 

    // Calculating the forward difference
    // table
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
            y[j][i] = y[j + 1][i - 1] - y[j][i - 1];
    }

    cout << setw(10) << "x" << setw(16) << "sqrt(x)" << endl;
    // Displaying the forward difference table
    for (int i = 0; i < n; i++)
    {
        cout << setw(10) << x[i] // setw ussage
             << "\t";
        for (int j = 0; j < n - i; j++)
            cout << setw(10) << y[i][j]
                 << "\t";
        cout << endl;
    }

    //Value to interpolate at 
    float value = 12516;

    // initializing p and sum
    float sum = y[0][0];
    float p = (value - x[0]) / (x[1] - x[0]);
    for (int i = 1; i < n; i++)
    {
        sum = sum + (u_cal(p, i) * y[0][i]) /fact(i);
    }

    cout << "\n Value at " << value << " is "
         << sum << endl;
    return 0;
}
