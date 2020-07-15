#include<iostream>

using namespace std ;

int main()
{
    int T{ 1 } ;
    cin >> T ;
    for( int i=0 ; i<T ; i++ )
    {
        int A{1}, B{1}, C{1} ;
        cin >> A >> B >> C ;
        if( A > B )
        {
            if( A > C )
            {
                cout << ( B>C ? B : C ) ;
            }
            else
            {
                cout << A ;
            }
        }        
        else{
            if( B > C )
            {
                cout << ( A>C ? A : C ) ;
            }
            else{
                cout << B ;
            }
        }
        cout << "\n" ;
    }
    return 0 ;
}