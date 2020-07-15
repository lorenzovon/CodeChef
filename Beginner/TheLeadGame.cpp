#include<iostream>

using namespace std;

int main()
{
    int NumRounds{ 0 };
    cin >> NumRounds ;
    int PlayerA[ NumRounds ] = { 0 } ;
    int PlayerB[ NumRounds ] = { 0 } ;

    for( int i = 0 ; i < NumRounds ; i++ )
    {
        cin >> PlayerA[i] >> PlayerB[i] ;        
    }

    int maxA{ 0 }, maxB{ 0 } ;
    int CumulativeA{ 0 }, CumulativeB{ 0 } ;

    for( int i = 0 ; i < NumRounds ; i++ )
    {
        CumulativeA += PlayerA[i] ;
        CumulativeB += PlayerB[i] ;  
        maxA = (CumulativeA - CumulativeB) > maxA ? (CumulativeA - CumulativeB) : maxA ;
        maxB = (CumulativeB - CumulativeA) > maxB ? (CumulativeB - CumulativeA) : maxB ;  
    }
    if(maxA > maxB)
    {
        cout << "1 " << maxA << "\n" ; 
    }
    else
    {
        cout << "2 " << maxB << "\n" ;
    }
    return 0 ;
}