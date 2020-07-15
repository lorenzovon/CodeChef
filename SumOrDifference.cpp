#include<iostream>

using namespace std ;

int main()
{    
    int A{ 0 }, B{ 0 } ;
    cin >> A >> B ;
    cout << ( A>B ? A-B : A+B ) << "\n" ;
    return 0 ;
}