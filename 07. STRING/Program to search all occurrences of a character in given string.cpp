#include <iostream>

using namespace std;

int main()
{
    int i;
    char ch;
    char str[100];
    bool isFound = false;

    cout << "Enter a String >>> ";
    cin.getline(str, 100);

    cout << "Enter a Character >>> ";
    cin >> ch;

    cout << endl;

    i = 0;

    cout << "All Occurrences: ";
    while(str[i] != '\0'){
        if(str[i] == ch){
            isFound = true;
            cout << i << " ";
        }
        i ++;
    }

    if(isFound == false){
        cout << ch << " not found!" << endl;
    }

    cout << endl;

    return 0;
}

