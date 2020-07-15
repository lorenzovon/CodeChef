#include<iostream>

using namespace std;

int main()
{
    int T{1} ;
    cin >> T ;
    for( int i=0 ; i<T ; i++ )
    {
        int N{1} ;
        cin >> N ;
        int first{0}, last{0} ;
        last = N%10;
        int sum{0} ;
        while(N!=0){
            if(N>0){
                first = N;
                N/=10;                
            }
        }
        sum=last+ first;
        cout << sum << "\n" ;
    }
    return 0 ;
}