//C++ program to generate forward dofference table 
#include<iostream>
#include<iomanip>
using namespace std;
int main()

{
 
cout.precision(10);        //set precision
    cout.setf(ios::fixed);
    
 int i,j, m;
 double x[20], y[20][20];

 // entring the values which  we have to find //
 cout << "Enter number of data " << endl;
 cin >> m;
 
 {
  cout <<"\nEnter the values of x:"<<endl;
   for(i = 0; i < m ; i++)
   cin >> x[i];
   
  cout << "\nEnter the values ofy:"<<endl;
   for(j = 0; j< m ; j++)
   cin >> y[j][0];
  }

 // Generating Forward Difference Table //
 for(i = 1; i < m; i++)
 {
  for(j = 0; j < m-i; j++)
  {
   y[j][i] = y[j+1][i-1] - y[j][i-1];
  }
 }

cout<<setw(10)<<"x[i]"<<setw(16)<<"sin(x)"<<endl;
 // Forward Difference Table //
 cout << endl << "FORWARD DIFFERENCE TABLE" << endl;
 for(int i = 0; i < m; i++)
 {
 cout<<setw(10)<<x[i]<<"\t";

  for( int j = 0; j < m-i ; j++)
  cout<<setw(10)<<y[i][j]<<"\t";
  cout << endl;
 }
 return 0;
}