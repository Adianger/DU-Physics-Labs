#include <iostream>
using namespace std;

int main()
{
    int test[3][3] =
    {
        {2, 5, 5}, 
        {4, 5, 2},
        {4, 5, 1}  };
     for (int i = 0; i < 3; i++)
    { 
        for (int j  = 0; j < 3; j++)
        {
            
        cout << test[i][j] << " ";
        }
    
    cout << "\t" << endl;
    }
    return 0;
}