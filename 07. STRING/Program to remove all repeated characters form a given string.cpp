#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[100];
    int freq[255];
    int i, index;
    int j, len;

    cout << "Enter a String >>> ";
    cin.get(str, 100);

    cout << endl;

    len = strlen(str);

    for(i = 0; i < 255; i ++){
        freq[i] = 0;
    }

    i = 0;

    while(str[i] != '\0'){
        index = (int)str[i];
        freq[index] ++;
        if(freq[index] > 1){
            for(j = i; j < len; j ++){
                str[j] = str[j + 1];
            }
            i --;
            len --;
            freq[index] --;
            str[len] = '\0';
        }
        i ++;
    }

    cout << "New String: " << str << endl;

    return 0;
}
