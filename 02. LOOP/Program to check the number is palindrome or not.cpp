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

    if(num == rev_num){
        cout << "The number is Palindrome!" << endl;
    }else{
        cout << "The number is Not Palindrome!" << endl;
    }

    return 0;
}

