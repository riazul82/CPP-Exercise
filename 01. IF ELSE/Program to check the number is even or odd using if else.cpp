#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Enter a number >>> ";
    cin >> num;

    cout << endl;

    if(num % 2){
        cout << "The number is Odd!" << endl;
    }else{
        cout << "The number is Even!" << endl;
    }

    return 0;
}

