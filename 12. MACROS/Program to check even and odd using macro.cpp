#include <iostream>

#define IS_ODD(X) X & 1

using namespace std;

int main()
{
    int num;

    cout << "Enter a number >>> ";
    cin >> num;

    cout << endl;

    if(IS_ODD(num)){
        cout << num << " is odd!" << endl;
    }else{
        cout << num << " is even!" << endl;
    }

    return 0;
}
