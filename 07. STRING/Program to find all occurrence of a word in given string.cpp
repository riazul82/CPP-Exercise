#include <iostream>

using namespace std;

int main()
{
    char str[100];
    char word[50];
    int i, j;
    int index;
    bool isFound;

    cout << "Enter a String >>> ";
    cin.getline(str, 100);

    cout << "Enter a Word to Search >>> ";
    cin.getline(word, 50);

    cout << endl;

    i = 0;
    j = 0;
    isFound = true;

    while(str[i] != '\0'){
        j = 0;
        if(str[i] == word[j]){
            int k = i;
            isFound = true;
            while(word[j] != '\0'){
                if(word[j] != str[k]){
                    isFound = false;
                    break;
                }
                k ++;
                j ++;
            }
            if(isFound == true){
                cout << "'" << word << "' found at position " << i << endl;
            }
        }
        i ++;
    }

    if(isFound == false){
        cout << "Not Found!" << endl;
    }

    return 0;
}

