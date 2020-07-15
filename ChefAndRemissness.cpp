#include<iostream>

using namespace std ;

int main()
{
    int T{ 1 } ;
    cin >> T ;
    for( int i=0 ; i<T ; i++ )
    {
        int A{ 1 }, B{ 1 } ;
        cin >> A >> B ;
        cout << ( A>B ? A : B ) << " " << ( A + B ) << "\n" ;
    }
    return 0 ;
}