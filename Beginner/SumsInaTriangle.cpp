#include<iostream>

using namespace std ;

int main()
{
    int TestCases{ 1 } ;
    cin >> TestCases ;
    for( int initA=0 ; initA<TestCases ; initA++ )
    {
        int NumLines{1} ;
        cin >> NumLines ;
        int contentStore[NumLines][NumLines]={0} ;
        for( int initB = 0 ; initB < NumLines ; initB++ )
        {
            for( int initC = 0 ; initC <= initB ; initC++ )
            {
                cin >> contentStore[initB][initC] ;
            }
        }
        int max{ 0 } ;
        for( int initB = 0 ; initB < NumLines ; initB++ )
        {
            
        }

    }
    return 0 ;
}