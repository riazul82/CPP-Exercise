#include <iostream>

using namespace std;

int main()
{
    char str[100];
    char ch, chr;
    int i;

    cout << "Enter a String >>> ";
    cin.getline(str, 100);

    cout << "Enter Character to replace >>> ";
    cin >> ch;

    cout << "Enter Character to replace with >>> ";
    cin >> chr;

    cout << endl;

    i = 0;

    while(str[i] != '\0'){
        if(str[i] == ch){
            str[i] = chr;
        }
        i ++;
    }

    cout << "Replaced String: " << str << endl;

    return 0;
}

