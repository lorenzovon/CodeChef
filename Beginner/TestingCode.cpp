#include<iostream>

using namespace std ;

int main()
{
    int TestCases{ 1 } ;
    cin >> TestCases ;
    for( int initA = 0 ; initA < TestCases ; initA++ )
    {
        string CheckString ;
        cin >> CheckString ;
        int numOfChar{0} ;
        numOfChar = CheckString.length() ;
        int FirstHalf[26] = { 0 } ;
        int SecondHalf[26] = { 0 } ;
        for( int initB = 0 ; initB < numOfChar/2 ; initB++ )
        {
            CheckString.at(initB)
        }
    }
    return 0 ;
}