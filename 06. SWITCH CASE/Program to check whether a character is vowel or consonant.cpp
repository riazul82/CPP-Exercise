#include <iostream>

using namespace std;

int main()
{
    char ch;

    cout << "Enter an Alphabet >>> ";
    cin >> ch;

    cout << endl;

    if(ch >= 'A' && ch <= 'Z'){
        ch = ch + 32;
    }

    switch(ch){
        case 'a':
            cout << "Vowel" << endl;
            break;
        case 'e':
            cout << "Vowel" << endl;
            break;
        case 'i':
            cout << "Vowel" << endl;
            break;
        case 'o':
            cout << "Vowel" << endl;
            break;
        case 'u':
            cout << "Vowel" << endl;
            break;
        default:
            cout << "Consonant" << endl;
            break;
    }
    return 0;
}
