#include <iostream>
#include <cstdio>

#define IS_UPPER(X) (X >= 'A' && X <= 'Z')
#define IS_LOWER(X) (X >= 'a' && X <= 'z')

using namespace std;

int main()
{
    char ch;

    cout << "Enter a character >>> ";
    ch = getchar();

    cout << endl;

    if(IS_UPPER(ch)){
        cout << "'" << ch << "' is uppercase!" << endl;
    }else if(IS_LOWER(ch)){
        cout << "'" << ch << "' is lowercase!" << endl;
    }else{
        cout << "It's not alphabet!" << endl;
    }

    return 0;
}
