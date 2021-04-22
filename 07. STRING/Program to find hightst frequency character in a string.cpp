#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[100];
    int freq[255];
    int i, index;
    int max_freq;

    cout << "Enter a String >>> ";
    cin.getline(str, 100);

    cout << endl;

    for(i = 0; i < 255; i ++){
        freq[i] = 0;
    }

    i = 0;
    max_freq = 0;

    while(str[i] != '\0'){
        index = (int)str[i];
        freq[index] ++;
        i ++;
    }

    for(i = 0; i < 255; i ++){
        if(freq[i] > max_freq){
            max_freq = freq[i];
            index = i;
        }
    }

    cout << "Maximum occurring character is '" << (char)index << "' " << max_freq << " times." << endl;

    return 0;
}



