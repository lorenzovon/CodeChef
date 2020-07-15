#include<iostream>

using namespace std;

int main()
{
    int T{0} ;
    cin >> T ;
    for( int i=0 ; i<T ; i++ )
    {        
        int N{1} ;
        cin >> N ;
        // automated input                
        int arr[10000] = {0} ;  
        arr[0]=1 ;              
        int size{ 1 } ;         
        for( int j=1 ; j<=N ; j++ )
        {
            int carry{ 0 } ;
            for( int k = 0 ; k < size ; k++) 
            {
                arr[k] = (arr[k]*j) + carry ;
                carry = arr[k]/10 ;
                arr[k]%=10 ;
                if( carry > 0)
                {
                    size++;
                }  
            } 
        }
        // cout << N << " " ;        
        int letPrint{0};
        for( int j = 0 ; j < 160 ; j++ )
        {                
            if(arr[160-j-1]!=0)
            {
                letPrint = 1 ;
            }
            if( letPrint ==1 )
            {
                cout << arr[160-j-1] ;
            }    

        }            
        cout << "\n" ;        
    }
    return 0 ;
}
