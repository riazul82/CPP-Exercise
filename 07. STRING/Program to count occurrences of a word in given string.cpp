#include <iostream>

using namespace std;

int main()
{
    char str[100];
    char word[50];
    int cnt;
    int i, j;
    bool isFound;

    cout << "Enter a String >>> ";
    cin.getline(str, 100);

    cout << "Enter a Word to Search >>> ";
    cin.getline(word, 50);

    cout << endl;

    i = 0;
    j = 0;
    cnt = 0;
    isFound = true;

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
                cnt ++;
            }
        }
        i ++;
    }

    if(isFound == false){
        cout << "Word Not Found!" << endl;
    }else{
        cout << "Total Occurrence: " << cnt << " times" << endl;
    }

    return 0;
}


