#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int i, j;
    int len, temp;
    char str[100];
    char rev[100];
    bool isPalindrome;

    cout << "Enter a String >>> ";
    cin.getline(str, 100);

    cout << endl;

    strcpy(rev, str);

    len = strlen(str);

    i = 0;
    j = len - 1;
    isPalindrome = true;

    while(i < j){
        temp = rev[i];
        rev[i] = rev[j];
        rev[j] = temp;

        i ++;
        j --;
    }

    i = 0;

    while(str[i] != '\0'){
        if(str[i] != rev[i]){
            isPalindrome = false;
            break;
        }
        i ++;
    }

    if(isPalindrome){
        cout << "The string is Palindrome!" << endl;
    }else{
        cout << "The string is not Palindrome!" << endl;
    }

    return 0;
}

