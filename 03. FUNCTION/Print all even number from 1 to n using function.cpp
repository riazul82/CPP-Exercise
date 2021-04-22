#include <iostream>

using namespace std;

void printEven(int n){
    for(int i = 1; i <= n; i ++){
        if(i % 2 == 0){
            cout << i << endl;
        }
    }
}

int main()
{
    int num;

    cout << "Enter number >>> ";
    cin >> num;

    printEven(num);

    return 0;
}

