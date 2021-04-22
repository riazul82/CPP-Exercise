#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[100];
    char ch, chr;
    int i, len;

    cout << "Enter a String >>> ";
    cin.getline(str, 100);

    cout << "Enter Character to replace >>> ";
    cin >> ch;

    cout << "Enter Character to replace with >>> ";
    cin >> chr;

    cout << endl;

    len = strlen(str);
    i = len - 1;

    while(i > 0){
        if(str[i] == ch){
            str[i] = chr;
            break;
        }
        i --;
    }

    cout << "Replaced String: " << str << endl;

    return 0;
}

