#include<iostream>
#include<string>

using namespace std ;

int main()
{
    int TestCases{ 1 } ;
    cin >> TestCases ;
    for( int initA=0 ; initA<TestCases ; initA++ )
    {        
        string StringA{ "" }, StringB{ "" } ;
        cin >> StringA >> StringB ;
        int unreadableA{ 0 }, unreadableB{ 0 }, unreadableCommon{ 0 }, equalReadable{ 0 }, unequal{ 0 } ;
        for( int initB = 0 ; initB<(StringA.length()) ; initB++ )
        {
            if( StringA.at(initB) == StringB.at(initB) )
            {
                if( StringA.at(initB) == '?' )
                {
                    unreadableCommon++ ;
                }
                else
                {
                    equalReadable++ ;
                }
            }
            else{
                if( StringA.at(initB) == '?' )
                {
                    unreadableA++ ;
                }                
                else if( StringB.at(initB) == '?' )
                {
                    unreadableB++ ;
                }
                else
                {
                    unequal++ ;
                }
                
            }
        }
        int maxUnequal{ 0 }, minUnequal{ 0 } ;
        maxUnequal = unequal + unreadableA + unreadableB + unreadableCommon ;
        minUnequal = unequal ;
        cout << minUnequal << " " << maxUnequal << "\n" ;
    }
    return 0 ;
}