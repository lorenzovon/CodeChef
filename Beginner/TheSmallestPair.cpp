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
        int inputArray[Number] ;
        for( int initB=0 ; initB < Number ; initB++ )
        {
            cin >> inputArray[initB] ;   
        }
        int minA{inputArray[0]}, minB{inputArray[0]} ;
        // int frequency{0} ;
        for( int initB=0 ; initB < Number ; initB++ )
        {
            // if(minA == inputArray[initB])
            // {
            //     frequency++;
            // }
            if(minA>inputArray[initB])
            {
                minA=inputArray[initB] ;
            }
            if(minB>inputArray[initB] )
            {
                if(inputArray[initB]!=minA)
                {
                    minB = inputArray[initB] ;
                }
            }
        }
        // cout << ( frequency>=2? minA*2 : minA+minB ) << "\n" ;
        cout << ( minA+minB ) << "\n" ;
        // cout << frequency << " " << minA << " " << minB << "\n" ;
    }
    return 0 ;
}