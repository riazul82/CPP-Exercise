#include <iostream>

using namespace std;

int main()
{
    char str[100];
    char *ptr = str;
    int len = 0;

    cout << "Enter a String >>> ";
    cin.getline(str, 100);

    cout << endl;

    while(*(ptr ++)){
        len ++;
    }

    cout << "String Length: " << len << endl;

    return 0;
}
