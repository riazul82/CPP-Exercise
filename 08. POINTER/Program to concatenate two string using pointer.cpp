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

     cout << "Enter another String >>> ";
     cin.getline(str2, 100);

     while(*(++ ptr1));

     while(*(ptr1 ++) = *(ptr2++));

     cout << "Concatenate String: " << str1 << endl;

     return 0;
}
