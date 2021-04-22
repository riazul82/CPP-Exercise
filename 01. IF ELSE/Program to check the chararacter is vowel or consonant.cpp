#include <iostream>

using namespace std;

int main()
{
    char ch;

    cout << "Enter an alphabet >>> ";
    cin >> ch;

    cout << endl;

    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){
        if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            cout << "The alphabet is Vowel!" << endl;
        }else if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            cout << "The alphabet is Vowel!" << endl;
        }else{
            cout << "The alphabet is Consonant!" << endl;
        }
    }else{
        cout << "The character you entered is not an alphabet!" << endl;
    }

    return 0;
}
