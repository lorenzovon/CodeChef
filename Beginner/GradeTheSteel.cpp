#include<iostream>
#include<cmath>

using namespace std ;

int grader( int digitised ) ;
int Digitise(double Hardness, double CarbonContent, double TensileStrength) ;

int grader( int digitised )
{    
    int grade{0} ;
    switch ( digitised )
    {
        case 111 :
            grade = 10 ;
            break ;
        case 110 :
            grade = 9 ;
            break ;
        case 11 :
            grade = 8 ;
            break ;
        case 101 :
            grade = 7 ;
            break ;
        case 100 :
            grade = 6 ;
            break ;
        case 10 :
            grade = 6 ;
            break ;        
        case 1 :
            grade = 6 ;
            break ;        
        case 0 :
            grade = 5 ;
            break ;
        default :
            break ;
            
    }
    return grade;
}

int Digitise(double Hardness, double CarbonContent, double TensileStrength)
{
    int overall[ 3 ] = { 0 } ;
    if( Hardness > 50 )
    {
        overall[0] = 1 ;
    }
    if( CarbonContent < 0.7 )
    {
        overall[1] = 1 ;
    }
    if( TensileStrength > 5600 )
    {
        overall[2] = 1 ;
    }   
    int digitised{ 0 } ;    
    for( int initA = 0 ; initA<3 ; initA++ )
    {
        digitised+=(overall[initA]*pow(10,3-initA-1)) ;
        // cout << digitised << " " ;
    }
    return digitised ;
}

int main()
{
    int TestCases{ 1 } ;
    cin >> TestCases ;
    for( int initA=0 ; initA<TestCases ; initA++ )
    {        
        double Hardness{ 0.0 }, CarbonContent{ 0.0 }, TensileStrength{ 0.0 } ;
        cin >> Hardness >> CarbonContent >> TensileStrength ;        
        int grade{ 0 } ;
        grade = grader(Digitise(Hardness, CarbonContent, TensileStrength)) ;
        cout << grade << "\n" ;
    }
    return 0 ;
}