#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main()
{
    int T{1} ;
    cin >> T ;
    for( int i=0 ; i<T ; i++ )
    {
        int N{ 0 } ;
        cin >> N ;
        int temp{ N } ;
        int digits{ 0 } ;
        while(temp!=0)
        {
            if(temp>0)
            {
                digits++;
                temp/=10;                
            }
        }  
        int reverse[digits] ;
        for( int t=0 ; t<digits ; t++ )
        {
            reverse[t]=N%10;
            N/=10;
        }  
        int ReverseOutput{ 0 } ;
        for(int t=0 ; t<digits ; t++ )
        {
            ReverseOutput+=reverse[t]*pow(10,digits-t-1) ;
        }                  
        cout << ReverseOutput << "\n" ;              
    }
    return 0 ;
}