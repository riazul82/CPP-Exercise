#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[100];
    char *ptr1 = str;
    char *ptr2 = str;
    int len;

    cout << "Enter a String >>> ";
    cin.getline(str, 100);

    len = strlen(str);

    ptr2 = &str[len - 1];

    while(ptr1 < ptr2){
        char temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;

        ptr1 ++;
        ptr2 --;
    }

    cout << endl;

    cout << "Reversed String: " << str << endl;

    return 0;
}

