#include<iostream>

using namespace std;

int main()
{
    int T{1} ;
    cin >> T ;
    for( int i=0 ; i<T ; i++ )
    {
        long long int N{0} ;
        cin >> N ;   
        int count{0} ;     
        while(N!=0){
            if(N%10==4){
                count++;                                
            }
            N/=10;
        }
        cout << count << "\n" ;
    }
    return 0 ;
}