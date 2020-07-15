#include<iostream>

using namespace std ;

int main()
{
    int N{ 1 } ;
    cin >> N ;
    int numWeapons[N] ;
    int countEven{0} ;
    int countOdd{0} ;
    for( int i=0 ; i<N ; i++ )
    {
        cin >> numWeapons[i] ;
        if( numWeapons[i]%2==0 )
        {
            countEven++ ;
        }
        else
        {
            countOdd++ ;
        }        
    }
    if( countEven>countOdd )
    {
        cout << "READY FOR BATTLE" ;
    }
    else 
    {
        cout << "NOT READY" ;
    }
    cout << "\n" ;
    return 0 ;
}