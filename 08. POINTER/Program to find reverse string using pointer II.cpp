#include <iostream>

using namespace std;

int main()
{
    char str[100];
    char *ptr1 = str;
    char *ptr2 = str;
    int i = 0;

    cout << "Enter a String >>> ";
    cin.getline(str, 100);

    while(str[i] != '\0'){
        ptr2 ++;
        i ++;
    }

    ptr2 --;

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
