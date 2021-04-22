#include <iostream>
#include <cmath>

using namespace std;

int rev_num(int n){

    if(n == 0){
        return 0;
    }

    int digits = (int)log10(n);

    return (n % 10) * (int)round(pow(10, digits)) + rev_num(n / 10);
}

int main()
{
    int num, rev;

    cout << "Enter a number >>> ";
    cin >> num;

    rev = rev_num(num);

    cout << endl;

    if(num == rev){
        cout << num << " is palindrome number!" << endl;
    }else{
        cout << num << " is not a palindrome number!" << endl;
    }

    return 0;
}

