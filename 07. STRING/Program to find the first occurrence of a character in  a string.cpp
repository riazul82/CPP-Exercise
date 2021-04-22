#include <iostream>

using namespace std;

int main()
{
    char ch;
    int i, index;
    char str[100];
    bool isFound = false;

    cout << "Enter a String >>> ";
    cin.getline(str, 100);

    cout << "Enter a Character >>> ";
    cin >> ch;

    cout << endl;

    i = 0;

    while(str[i] != '\0'){
        if(str[i] == ch){
            isFound = true;
            index = i;
            break;
        }
        i ++;
    }

    if(isFound){
        cout << ch << " found at position " << index << endl;
    }else{
        cout << ch << " not found!" << endl;
    }

    return 0;
}
