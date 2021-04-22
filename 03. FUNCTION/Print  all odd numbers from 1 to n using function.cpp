#include <iostream>

using namespace std;

void printOdd(int n){
    for(int i = 1; i <= n; i ++){
        if(i % 2 == 1){
            cout << i << endl;
        }
    }
}

int main()
{
    int num;

    cout << "Enter number >>> ";
    cin >> num;

    printOdd(num);

    return 0;
}

