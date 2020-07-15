#include<iostream>

using namespace std ;

int main()
{
    int TestCases{ 1 } ;
    cin >> TestCases ;
    for( int initA=0 ; initA<TestCases ; initA++ )
    {
        int Number{1} ;
        cin >> Number ;
        int root{ 1 } ;
        for( int initB=1 ; initB <= Number/2 ; initB++ )
        {
            if( (initB*initB)<=Number && ((initB+1)*(initB+1))>Number )
            {                
                root = initB ;                
                exit ;
            }
        }
        // cout << root << "\n" ;
        int isPrime{ 0 } ;
        for( int initB=2 ; initB<=root ; initB++ )
        {
            if( Number%initB == 0 )
            {                
                isPrime++ ;
                // cout << isPrime ;
            }
        }
        cout << ( isPrime==0? "yes" : "no" ) << "\n" ;
    }
    return 0 ;
}