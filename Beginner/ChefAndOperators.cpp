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
        if( A>B )
        {
            cout << ">" ;
        }
        if( A<B )
        {
            cout << "<" ;
        }
        if( A==B )
        {
            cout << "=" ;
        }
        cout << "\n" ;
    }
    return 0 ;
}