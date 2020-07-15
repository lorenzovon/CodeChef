#include <iostream>

using namespace std ;

bool prime( int Number ) ; 

bool prime( int Number )
{    
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
    bool IsPrime{ 0 } ;
    IsPrime = isPrime==0? 1 : 0 ;
    return IsPrime ;
}

int SumAll( int X, int Y, int Z) ; 
int SumAll( int X, int Y, int Z) 
{
    return (X + Y + Z) ;
}

int main()
{
    int TestCases{ 1 } ;
    cin >> TestCases ;
    for( int initA=0 ; initA<TestCases ; initA++ )
    {
        int NumberX{ 1 }, NumberY{ 1 }, NumberZ{ 1 } ;
        cin >> NumberX >> NumberY ;        
        while( !prime( SumAll( NumberX, NumberY, NumberZ ) ))
        {
            NumberZ++;
        }
        cout << NumberZ << "\n" ;
    }
    return 0 ;
}