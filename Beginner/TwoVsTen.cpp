#include <iostream>

using namespace std ;

int main()
{
    int TestCases{ 1 } ;
    cin >> TestCases ;
    for( int initA=0 ; initA<TestCases ; initA++ )
    {
        int Number{1} ;
        cin >> Number ;
        if(Number%5==0)
        {
            if(Number%10==0)
            {
                cout << 0 << "\n" ;
            }
            else
            {
                cout << 1 << "\n" ;
            }
        }
        else
        {
            cout << -1 << "\n" ;
        }
    }
    return 0 ;
}