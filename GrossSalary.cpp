#include<iostream>
#include<iomanip>

using namespace std ;

int main()
{
    int TestCases{ 1 } ;
    cin >> TestCases ;
    for( int initA=0 ; initA<TestCases ; initA++ )
    {
        int BasicSalary{ 0 } ;
        cin >> BasicSalary ;
        double GrossSalary{ 0.0 }, HRA{ 0.0 }, DA{ 0.0 } ;
        if( BasicSalary < 1500 )
        {
            HRA = 0.1*BasicSalary ;
            DA = 0.9*BasicSalary ;            
        }
        else
        {
            HRA = 500 ;
            DA = 0.98*BasicSalary ;
        }
        GrossSalary = BasicSalary + HRA + DA ;
        cout << fixed << setprecision(2) << GrossSalary << "\n" ;
    }
    return 0 ;
}