#include<iostream>

using namespace std ;

int main()
{
    int TestCases{ 1 } ;
    cin >> TestCases ;
    for( int initA=0 ; initA<TestCases ; initA++ )
    {
        char ClassID ;
        cin >> ClassID ;
        switch(ClassID)
        {
            case 'B' : 
                cout << "BattleShip" ;
                break ;
            case 'b' :
                cout << "BattleShip" ;
                break ;
            case 'C' :
                cout << "Cruiser" ;
                break ;
            case 'c' :
                cout << "Cruiser" ;
                break ;
            case 'D' :
                cout << "Destroyer" ;
                break ;
            case 'd' :
                cout << "Destroyer" ;
                break ;
            case 'F' :
                cout << "Frigate" ;
                break ;
            case 'f' :
                cout << "Frigate" ;
                break ;
            default :
                cout << "" ;
                break ;
        }
        cout << "\n" ;

    }
    return 0 ;
}