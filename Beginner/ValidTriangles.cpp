#include<iostream>

using namespace std ;

int main()
{
    int T{ 1 } ;
    cin >> T ;
    for( int i=0 ; i<T ; i++ )
    {
        int A{ 0 }, B{ 0 }, C{ 0 } ;
        cin >> A >> B >> C ;
        
        if( A+B+C==180 )
        {
            cout << "YES" ;
        }
        else 
        {
            cout << "NO" ;
        }
        cout << "\n" ;
    }
    return 0 ;
}