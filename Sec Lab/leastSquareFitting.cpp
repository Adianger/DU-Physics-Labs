#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    float x[100], y[100], xx[100],xy[100]; //using array function
    cout<< "\t\t\t\t\t\t.................Calculates the best fit value using least square method in y=a+bx...............\n";
    cout<< "Enter number of data pairs:\n";
    cin>>n;
    cout<<"Enter value pair:\n"<<endl;

    for (int i=0; i<n; i++)  //for-loop for data input
    {
        cout<<"Data "<<i+1<<": " <<endl;
        cout<<"x: ";
        cin>>x[i];
        cout<<"y: ";
        cin>>y[i];
    }
    cout<< "\n\nData input completed.\n The value table: "<<endl;
    cout<<"\t\tx\t\ty\t\txy\t\txx"<<endl;
    for (int i=0; i<n; i++)  //for-loop for table generation
    {
        xy[i]=x[i]*y[i];
        xx[i]=x[i]*x[i];
        cout<<"\t\t"<<x[i] << "\t\t"<<y[i]<<"\t\t"<<xy[i]<<"\t\t"<<xx[i]<<endl;
    }

    float sumy=0, sumx=0, sumxy=0, sumxx=0;
    for (int i=0; i<n; i++)
    {
        sumy+= y[i];
        sumx+= x[i];
        sumxy+= y[i]*x[i];
        sumxx+= x[i]*x[i];
    }
    cout<<"\t\tsumx\t\tsumy\t\tsumxy\t\tsumxx " <<endl;
    cout<< "\t\t"<<sumx<< "\t\t"   << sumy<< "\t\t"<< sumxy<< "\t\t"<< sumxx<< endl;
    float a=(sumx*sumxy-sumy*sumxx)/(sumx*sumx-n*sumxx); //formula for finding the value of a and here n is the number of pair
    float b=(sumy*sumx-n*sumxy)/(sumx*sumx-n*sumxx);     //formula for value of b

    cout<<"\n\nThe calculated value of a and b is : "<< a<< " and "<< b<< "."<<endl;
    cout<<"\n\nThe best fit value of curve is : y = "<< a<< " + "<< b<< "x.\n\n"<<endl;


}
