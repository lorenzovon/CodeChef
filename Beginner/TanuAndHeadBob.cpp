#include<iostream>

using namespace std ;

int main()
{
    int NumPeople{ 1 } ;
    cin >> NumPeople ;
    for( int initA=0 ; initA<NumPeople ; initA++ )
    {
        int NumGestures{1} ;
        cin >> NumGestures ;
        int GestureCount[3] = { 0 } ;
        for( int initB=0 ; initB < NumGestures ; initB++ )
        {
            char gesture;
            cin >> gesture ;
            switch( gesture )
            {
                case 'Y' :
                    GestureCount[0]++ ;
                    break ;
                case 'N' :
                    GestureCount[1]++ ;
                    break ;
                case 'I' :
                    GestureCount[2]++ ;
                    break ;
                default : 
                    break ;
            }
        }
        // for(int initB = 0 ; initB < 3 ; initB++ )
        // {
        //     cout << GestureCount[initB] << "\n";
        // }
        if( GestureCount[2]>0 )
        {
            cout << "INDIAN" ;
        }
        else
        {
            if( GestureCount[0]>0 )
            {
                cout << "NOT INDIAN" ;
            }
            else
            {
                cout << "NOT SURE" ;
            }
        }
        cout << "\n" ;
    }
    return 0 ;
}