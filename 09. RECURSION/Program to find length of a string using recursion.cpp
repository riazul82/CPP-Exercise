#include <iostream>

using namespace std;

int strlen(char str[]){

    static int len = 0;

    if(str[len] == '\0'){
        return len;
    }

    len ++;

    strlen(str);
}

int main()
{
    char str[100];
    int len;

    cout << "Enter a String >>> ";
    cin.getline(str, 100);

    len = strlen(str);

    cout << endl;

    cout << "String Length: " << len << endl;

    return 0;
}
