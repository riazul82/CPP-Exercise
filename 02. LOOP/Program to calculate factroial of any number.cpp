#include <iostream>

using namespace std;

int main()
{
    int num;
    int i, n;
    long long int fact = 1ll;

    cout << "Enter number >>> ";
    cin >> num;

    n = num;

    while(n != 0){
        fact *= n;
        n --;
    }

    cout << endl << "Factorial of " << num << " is: " << fact << endl;

    return 0;
}
