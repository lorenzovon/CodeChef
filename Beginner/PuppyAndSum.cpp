#include<iostream>

using namespace std ;

int sum(int number) ;

int sum(int number)
{
    int Sum{ 0 } ;
    for(int initA=1 ; initA<=number ; initA++ )
    {
        Sum+=initA ;
    }
    return Sum;
}

int main()
{
    int TestCases{ 1 } ;
    cin >> TestCases ;
    for( int initA=0 ; initA<TestCases ; initA++ )
    {
        int Times{ 1 }, Number{ 1 } ;
        cin >> Times >> Number ;
        int finalSum{Number} ;
        for( int initB=1 ; initB<=Times ; initB++ )
        {            
            finalSum = sum(finalSum) ;
        }
        cout << finalSum << "\n" ;
    }
    return 0 ;
}