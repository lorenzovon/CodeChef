#include<iostream>

using namespace std ;

// Bubble sort

int main()
{
    int T{ 1 } ;
    cin >> T ;
    int N[T] ;
    for( int i=0 ; i<T ; i++ )
    {
        cin >> N[i] ;        
    }    
    for( int i = 0 ; i<T-1 ; i++ )
    {
        for( int k=0 ; k<T-i-1 ; k++ )
        {
            if(N[k]>N[k+1])
            {
                int temp{N[k]} ;
                N[k] = N[k+1] ;
                N[k+1] = temp ;
            }
        }        
    }
    for( int i=0 ; i<T ; i++ )
    {
        cout << N[i] << "\n" ;        
    }
    return 0 ;
}