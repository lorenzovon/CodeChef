#include<iostream>

using namespace std ;

int main()
{
    int Number{1} ;
    cin >> Number ;
    cout << ( Number%4==0 ? ++Number : --Number ) << "\n" ;
    return 0 ;
}