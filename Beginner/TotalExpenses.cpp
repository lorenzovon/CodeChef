#include<iostream>
#include<iomanip>

using namespace std ;

int main()
{
    int TestCases{ 1 } ;
    cin >> TestCases ;
    for( int initA=0 ; initA<TestCases ; initA++ )
    {
        int quantity{ 1 }, price{ 1 } ;
        double TotalExpenses{ 0.0 } ;
        cin >> quantity >> price ;
        if( quantity > 1000 )
        {
            TotalExpenses+=(0.9*quantity*price) ;
        }
        else
        {
            TotalExpenses+=(quantity*price) ;
        }
        cout << fixed << setprecision(6) << TotalExpenses << "\n" ;
    }
    return 0 ;
}