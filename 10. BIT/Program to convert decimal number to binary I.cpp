#include <iostream>

using namespace std;

int main()
{
    int n, decimal, binary;

    cout << "Enter any decimal number >>> ";
    cin >> decimal;

    cout << endl;

    binary = 0;
    n = 1;

    while(decimal != 0){
        binary += n * (decimal & 1);
        decimal >>= 1;
        n *= 10;
    }

    cout << "Binary number: " << binary << endl;

    return 0;
}
