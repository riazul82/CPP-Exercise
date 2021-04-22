#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char ch;
    char str[100];
    int i, j, len;

    cout << "Enter a String >>> ";
    cin.get(str, 100);

    cout << "Enter a Character to remove >>> ";
    cin >> ch;

    cout << endl;

    len = strlen(str);

    i = 0;

    while(str[i] != '\0'){
        if(str[i] == ch){
            for(j = i; j < len; j ++){
                str[j] = str[j + 1];
            }
            str[len - 1] = '\0';
            break;
        }
        i ++;
    }

    cout << "New String: " << str << endl;

    return 0;
}
