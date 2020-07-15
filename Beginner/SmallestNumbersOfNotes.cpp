#include<iostream>

using namespace std ;

int main()
{
    int TestCases{ 1 } ;
    cin >> TestCases ;
    int numofCurrencies{ 6 } ;
    int currencies[ 6 ] = { 1, 2, 5, 10, 50, 100} ;  
    for( int initA=0 ; initA<TestCases ; initA++ )
    {
        int Number{1} ;
        cin >> Number ;
        int notes{ 0 } ;
        int smallestNumNotes[ Number ];
        for( int initB = 0 ; initB < 6 ; initB++ ) 
        {
            notes+=(Number/currencies[5-initB]) ;
            // cout << notes << " " << currencies[5-initB] << " " ;
            Number%=currencies[5-initB] ;
        }
        cout << notes << "\n" ;

    }
    return 0 ;
}