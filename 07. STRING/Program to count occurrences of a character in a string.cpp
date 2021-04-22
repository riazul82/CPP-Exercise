#include <iostream>

using namespace std;

int main()
{
    char ch;
    char str[100];
    int i, cnt;

    cout << "Enter a String >>> ";
    cin.getline(str, 100);

    cout << "Enter a Character >>> ";
    cin >> ch;

    cout << endl;

    i = 0;
    cnt = 0;

    while(str[i] != '\0'){
        if(str[i] == ch){
            cnt ++;
        }
        i ++;
    }

    cout << "Total Occurrences: " << cnt << " times" << endl;

    return 0;
}


