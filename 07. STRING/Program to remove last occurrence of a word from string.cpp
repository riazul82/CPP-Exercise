#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[100];
    char word[50];
    int slen, wlen;
    int i, j, index;
    bool isFound;

    cout << "Enter a String >>> ";
    cin.getline(str, 100);

    cout << "Enter a Word to Search >>> ";
    cin.getline(word, 50);

    cout << endl;

    i = 0;
    j = 0;
    isFound = true;

    slen = strlen(str);
    wlen = strlen(word);

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
                index = i;
            }
        }
        i ++;
    }

    if(isFound == true){
        for(j = index; j < slen; j ++){
            str[j] = str[j + wlen];
        }
        slen -= wlen;
        str[slen] = '\0';
    }

    if(isFound == true){
        cout << "New String: " << str << endl;
    }else{
        cout << "Word Not Found!" << endl;
    }

    return 0;
}

