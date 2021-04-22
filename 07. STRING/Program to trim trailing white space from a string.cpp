#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[100];
    int i, len, index;

    cout << "Enter a String >>> ";
    cin.getline(str, 100);

    cout << endl;

    i = 0;
    index = -1;

    cout << "Before Trimming: '" << str << "'" << endl;

    while(str[i] != '\0'){
        if(str[i] != ' ' && str[i] != '\t' && str[i] != '\n'){
            index = i;
        }
        i ++;
    }

    index ++;

    str[index] = '\0';

    cout << "After Trimming: '" << str << "'" << endl;

    return 0;
}

