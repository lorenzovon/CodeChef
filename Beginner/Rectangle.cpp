#include<iostream>

using namespace std ;

int main()
{
    int TestCases{ 1 } ;
    cin >> TestCases ;
    for( int initA=0 ; initA<TestCases ; initA++ )
    {
        int a{ 1 }, b{ 1 }, c{ 1 }, d{ 1 } ;
        cin >> a >> b >> c >> d ;
        if( a==b && c==d )
        {
            cout << "YES" ;
        }
        else if( a==c && b==d )
        {
            cout << "YES" ;
        }
        else if( a==d && b==c )
        {
            cout << "YES" ;
        }
        else{
            cout << "NO" ;
        }
        cout << "\n" ;
    }
    return 0 ;
}