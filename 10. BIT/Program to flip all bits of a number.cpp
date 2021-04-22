#include <iostream>

using namespace std;

int main()
{
    int num, flippedNum;

    cout << "Enter any number >>> ";
    cin >> num;

    flippedNum = ~num;

    cout << endl;

    cout << "Flipped number: " << flippedNum << endl;

    return 0;
}
