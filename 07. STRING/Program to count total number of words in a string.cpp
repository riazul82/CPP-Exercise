#include <iostream>

using namespace std;

int main()
{
    char str[100];
    char prevChar;
    int i, words;

    cout << "Enter a String >>> ";
    cin.getline(str, 100);

    cout << endl;

    i = 0;
    words = 0;
    prevChar = '\0';

    while(true){
        if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\0'){
            if(prevChar != ' ' && prevChar != '\n' && prevChar != '\t' && prevChar != '\0'){
                words ++;
            }
        }
        if(str[i] == '\0'){
            break;
        }
        prevChar = str[i];
        i ++;
    }

    cout << "Total Words: " << words << endl;

    return 0;
}
