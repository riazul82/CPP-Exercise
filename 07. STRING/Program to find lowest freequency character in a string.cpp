#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[100];
    int freq[255];
    int i, index;
    int min_freq;

    cout << "Enter a String >>> ";
    cin.getline(str, 100);

    cout << endl;

    for(i = 0; i < 255; i ++){
        freq[i] = 0;
    }

    i = 0;
    min_freq = INT_MAX;

    while(str[i] != '\0'){
        index = (int)str[i];
        freq[index] ++;
        i ++;
    }

    for(i = 0; i < 255; i ++){
        if(freq[i] < min_freq && freq[i] != 0){
            min_freq = freq[i];
            index = i;
        }
    }

    cout << "Minimum occurring character is '" << (char)index << "' " << min_freq << " times." << endl;

    return 0;
}




