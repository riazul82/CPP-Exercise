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

    cout << "Before Trimming: '" << str << "'" << endl;

    i = 0;
    index = 0;

    len = strlen(str);

    while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'){
        i ++;
        index ++;
    }

    if(index != 0){
        for(i = 0; i < len; i ++){
            str[i] = str[i + index];
        }
    }

    len -= index;

    str[len] = '\0';

    cout << "After Trimming: '" << str << "'" << endl;

    return 0;
}
