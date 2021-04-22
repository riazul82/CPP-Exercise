#include <iostream>

using namespace std;

int main()
{
    char str1[100];
    char str2[100];
    char *ptr1 = str1;
    char *ptr2 = str2;

    cout << "Enter a String >>> ";
    cin.getline(str1, 100);

    cout << endl;

    while(*(ptr2 ++) = *(ptr1 ++));

    cout << "Copied String: " << str2 << endl;

    return 0;
}
