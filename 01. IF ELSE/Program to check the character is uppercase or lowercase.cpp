#include <iostream>

using namespace std;

int main()
{
    char ch;

    cout << "Enter a character >>> ";
    cin >> ch;

    cout << endl;

    if(ch >= 'A' && ch <= 'Z'){
        cout << "The alphabet is Uppercase!" << endl;
    }else if(ch >= 'a' && ch <= 'z'){
        cout << "The alphabet is Lowercase!" << endl;
    }else{
        cout << "The character is not an Alphabet!" << endl;
    }

    return 0;
}
