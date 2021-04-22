#include <iostream>

using namespace std;

int main()
{
    int num;
    int last;
    int rev_num;

    cout << "Enter a number >>> ";
    cin >> num;

    cout << endl;

    int n = num;
    rev_num = 0;

    while(n != 0){
        rev_num = (rev_num * 10) + (n % 10);
        n /= 10;
    }

    cout << "Reverse number: " << rev_num << endl;

    return 0;
}
