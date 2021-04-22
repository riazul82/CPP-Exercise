#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[100];
    char rev[100];
    char word[50];
    int i, j, k, slen;
    bool isWord;

    cout << "Enter a String >>> ";
    cin.getline(str, 100);

    cout << endl;

    strrev(str);
    slen = strlen(str);

    i = 0;
    j = 0;

    while(str[i] != '\0'){
        k = 0;
        isWord = false;
        while(str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0'){
            isWord = true;
            word[k] = str[i];
            k ++;
            i ++;
        }

        if(isWord == true){
            word[k] = '\0';
            strrev(word);
            k = 0;
            while(word[k] != '\0'){
                rev[j] = word[k];
                j ++;
                k ++;
            }
            rev[j] = ' ';
            j ++;
        }
        i ++;
    }

    rev[slen] = '\0';

    cout << rev << endl;

    return 0;

}
