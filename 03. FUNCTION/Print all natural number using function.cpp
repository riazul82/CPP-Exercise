#include <iostream>

using namespace std;

void printNum(int n){
    for(int i = 1; i <= n; i ++){
        cout << i << endl;
    }
}

int main()
{
    int num;

    cout << "Enter number >>> ";
    cin >> num;

    printNum(num);

    return 0;
}
