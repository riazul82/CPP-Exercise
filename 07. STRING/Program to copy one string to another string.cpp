#include <iostream>

using namespace std;

int main()
{
    char str[100];
    char cst[100];
    int i;

    cout << "Enter a String >>> ";
    cin.get(str, 100);

    cout << endl;

    i = 0;

    while(str[i] != '\0'){
        cst[i] = str[i];
        i ++;
    }

    cst[i] = '\0';

    cout << "Copied string: " << cst << endl;

    return 0;
}
