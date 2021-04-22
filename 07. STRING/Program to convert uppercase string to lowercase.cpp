#include <iostream>

using namespace std;

int main()
{
    char str[100];
    int i;

    cout << "Enter a String >>> ";
    cin.get(str, 100);

    cout << endl;

    i = 0;

    while(str[i] != '\0'){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
        i ++;
    }

    cout << "LOWERCASE STRING: " << str << endl;

    return 0;
}

