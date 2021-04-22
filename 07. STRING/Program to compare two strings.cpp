#include <iostream>

using namespace std;

int compare(char *s1, char *s2){
    int i = 0;
    while(s1[i] == s2[i]){
        if(s1[i] == '\0' && s2[i] == '\0'){
            break;
        }
        i ++;
    }
    return s1[i] - s2[i];
}

int main()
{
    char str1[100];
    char str2[100];
    int res;

    cout << "Enter first string >>> ";
    cin.getline(str1, 100);

    cout << "Enter second string >>> ";
    cin.getline(str2, 100);

    cout << endl;

    res = compare(str1, str2);

    if(res > 0){
        cout << "First string is lexicographically greater than second!" << endl;
    }else if(res < 0){
        cout << "First string is lexicographically smaller than second!" << endl;
    }else{
        cout << "Two strings are equal!" << endl;
    }

    return 0;
}
