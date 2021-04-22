#include <iostream>

using namespace std;

int main()
{
    int num, n;
    int freq[10];
    int i, last;

    cout << "Enter number >>> ";
    cin >> num;

    for(i = 0; i < 10; i ++){
        freq[i] = 0;
    }

    n = num;

    while(n != 0){
        last = n % 10;
        freq[last] ++;
        n /= 10;
    }

    for(i = 0; i < 10; i ++){
        if(freq[i] != 0){
            cout << i << " occurs " << freq[i] << " times." << endl;
        }
    }

    return 0;

}
