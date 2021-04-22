#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[100];
    char newStr[100];
    int i, j, len, index;

    cout << "Enter a String >>> ";
    cin.getline(str, 100);

    cout << endl;

    cout << "Before Removing Extra Blanks: '" << str << "'" << endl;


    // STARTS REMOVING LEADING WHITE SPACES

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

    // LEADING WHITE SPACES REMOVED!



    // STARTS REMOVING TRAILING WHITE SPACES

    i = 0;
    index = -1;

    while(str[i] != '\0'){
        if(str[i] != ' ' && str[i] != '\t' && str[i] != '\n'){
            index = i;
        }
        i ++;
    }

    index ++;

    str[index] = '\0';

    // TRAILING WHITE SPACES REMOVED!



    // STARTS REMOVING EXTRA BLANKS

    i = 0;
    j = 0;

    while(str[i] != '\0'){
        if(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'){
            newStr[j] = ' ';
            j ++;
            while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'){
                i ++;
            }
        }
        newStr[j] = str[i];
        i ++;
        j ++;
    }

    newStr[j] = '\0';

    // EXTRA BLANKS REMOVED!

    cout << "New String: '" << newStr << "'" << endl;

    return 0;
}
