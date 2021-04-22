#include <iostream>

using namespace std;

int reverse_num(int n){
    int x = n;
    int rev = 0;
    while(x != 0){
        rev = (rev * 10) + (x % 10);
        x /= 10;
    }
    return rev;
}

int main()
{
    int num, rev;

    cout << "Enter number >>> ";
    cin >> num;

    cout << endl;

    rev = reverse_num(num);

    cout << "Reverse number: " << rev << endl;

    return 0;
}
