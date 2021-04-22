#include <iostream>

using namespace std;

int main()
{
    char str[100];
    int freq[255];
    int i, index;

    cout << "Enter a String >>> ";
    cin.get(str, 100);

    cout << endl;

    for(i = 0; i < 255; i ++){
        freq[i] = 0;
    }

    i = 0;

    while(str[i] != '\0'){
        index = (int)str[i];
        freq[index] ++;
        i ++;
    }

    for(i = 0; i < 255; i ++){
        if(freq[i] != 0){
            cout << "'" << (char)i << "' occurs " << freq[i] << " times" << endl;
        }
    }

    return 0;
}
