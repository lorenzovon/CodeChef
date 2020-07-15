#include<iostream>

using namespace std ;

int main()
{
    int T{ 1 } ;
    cin >> T ;
    for( int i=0 ; i<T ; i++ )
    {
        int N{0} ;
        cin >> N ;
        int fact{1} ;
        for( int j=1 ; j<=N ; j++ )
        {
            fact*=j;
        }
        cout << fact << "\n" ;
    }
    return 0 ;
}