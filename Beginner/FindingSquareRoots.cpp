#include<iostream>

using namespace std;

int main()
{
    int TestCases{ 0 } ;
    cin >> TestCases ;
    for( int i=0 ; i < TestCases ; i++ )
    {
        int Number{ 1 } ;
        cin >> Number ;
        int root{ 1 } ;
        for( int t=1 ; t <= Number/2 ; t++ )
        {
            if( (t*t)<=Number && ((t+1)*(t+1))>Number )
            {                
                root = t ;                
                exit ;
            }
        }
        cout << root << "\n" ;
    }
    return 0;
}