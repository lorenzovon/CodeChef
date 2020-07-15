#include <iostream>

using namespace std ;

int main()
{
    int TestCases{ 1 } ;
    cin >> TestCases ;
    for( int initA=0 ; initA<TestCases ; initA++ )
    {
        string Number ;
        cin >> Number ;
        int countOne{ 0 }, countZero{ 0 } ;
        for( int initB = 0 ; initB < Number.length() ; initB++ )
        {
            if(Number.at(initB)=='0')
            {
                countZero++ ;
            }
            if(Number.at(initB)=='1')
            {
                countOne++ ;
            }
        }
        if( countOne==(Number.length()-1) || countZero==(Number.length()-1) )
        {
            cout << "Yes" << "\n" ;
        }
        else
        {
            cout << "No" << "\n" ;
        }
    }
    return 0 ;
}