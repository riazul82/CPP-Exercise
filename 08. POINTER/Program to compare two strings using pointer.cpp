#include <iostream>

using namespace std;

int main()
{
    char str1[100];
    char str2[100];
    char *ptr1 = str1;
    char *ptr2 = str2;
    int cmp;

    cout << "Enter a String >>> ";
    cin.getline(str1, 100);

    cout << "Enter another String >>> ";
    cin.getline(str2, 100);

    while((*ptr1 && *ptr2) && (*ptr1 == *ptr2)){
        ptr1 ++;
        ptr2 ++;
    }

    cmp = *ptr1 - *ptr2;

    cout << endl;

    if(cmp > 0){
        cout << "First string is lexicographically greater than second!" << endl;
    }else if(cmp < 0){
        cout << "Second string is lexicographically smaller than second!" << endl;
    }else{
        cout << "Both strings are equal!" << endl;
    }

    return 0;
}
