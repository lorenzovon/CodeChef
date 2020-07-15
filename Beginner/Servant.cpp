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
        if(N<10)
        {
            cout << "What an obedient servant you are!" << "\n" ;
        }
        else
        {
            cout << -1 << "\n" ;
        }
    }
    return 0 ;
}