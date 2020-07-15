#include <iostream>

using namespace std ;

int main()
{
    
    int Length{ 1 }, Breadth{ 1 } ;
    cin >> Length >> Breadth ;
    int Area{ 1 } , Perimeter{ 1 } ;
    Area = Length * Breadth ;
    Perimeter = 2 * ( Length + Breadth ) ;
    if( Area > Perimeter )
    {
        cout << "Area" << "\n" ;
        cout << Area << "\n" ;
    }
    else if( Perimeter > Area )
    {
        cout << "Peri" << "\n" ;
        cout << Perimeter << "\n" ;
    }
    else{
        cout << "Eq" << "\n" ;
        cout << Area << "\n" ;
    }
    return 0 ;
}