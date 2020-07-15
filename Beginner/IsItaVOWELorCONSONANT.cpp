#include<iostream>

using namespace std ;

int main()
{
    
    char character{'\0'} ;
    cin >> character ;
    switch(character)
    {
        case 'A':
            cout << "Vowel" ;
            break ;
        case 'E' :
            cout << "Vowel" ;
            break ;
        case 'I' :
            cout << "Vowel" ;
            break ;
        case 'O' :
            cout << "Vowel" ;
            break ;
        case 'U' :
            cout << "Vowel" ;
            break ;
        default :
            cout << "Consonant" ;
            break ;
    }
    cout << "\n" ;
    return 0 ;
}