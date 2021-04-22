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
        i ++;
    }

    cout << "Length: " << i << endl;

    return 0;
}
