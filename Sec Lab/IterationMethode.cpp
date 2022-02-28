#include<bits/stdc++.h>

using namespace std;

#define f(x) 1/((x+1)*(x+1))  // equation 
#define g(x) 1/((x+1)*(x+1))

int main()
{
    float x0,x1,e=1;
    cout<< "input the initial guess:";
    cin>>x0;
    cout<<x0<<endl;
    while(e>0.0001)
    {
        x1=g(x0);//working formula 
        e=fabs((x1-x0)/x1);
        x0=x1;
        cout<<x0<<endl;
    }
    cout<< "\nthe root of the equation ="<<x0;
    return 0;
}