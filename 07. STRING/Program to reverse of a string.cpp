#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int i, j;
    int len, temp;
    char str[100];

    cout << "Enter a String >>> ";
    cin.getline(str, 100);

    cout << endl;

    len = strlen(str);

    i = 0;
    j = len - 1;

    while(i < j){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i ++;
        j --;
    }

    cout << "Reversed String: " << str << endl;

    return 0;
}
