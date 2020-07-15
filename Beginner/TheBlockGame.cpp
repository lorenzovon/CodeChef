#include<iostream>

using namespace std ;

int main()
{
    int T{ 1 } ;
    cin >> T ;
    for( int i=0 ; i<T ; i++ )
    {
        int N{1} ;
        cin >> N ;
        int temp{ N } ;
        int digits{ 0 } ;
        while(temp!=0)
        {
            if(temp>0)
            {
                digits++;
                temp/=10;                
            }
        }
        int numberArray[ digits ] ;
        for( int j=0 ; j<digits ; j++ )
        {
            numberArray[j] = N%10 ;
            N/=10 ;            
        }
        // for( int j=0 ; j<digits ; j++ )
        // {
        //     cout << numberArray[j] ;                       
        // }
        int isPalindrome{ 0 } ;
        for( int j=0 ; j<(digits/2) ; j++ )
        {
            if( numberArray[j]==numberArray[digits-j-1] )
            {
                isPalindrome++;
            }
        }
        if( isPalindrome==(digits/2) )
        {
            cout << "wins" ;
        }
        else
        {
            cout << "losses" ;
        }
        cout << "\n" ;

    }
    return 0 ;
}