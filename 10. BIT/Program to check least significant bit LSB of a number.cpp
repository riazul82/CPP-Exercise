#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Enter any number >>> ";
    cin >> num;

    cout << endl;

    if(num & 1){
        cout << "LSB of " << num << " is a set(1)" << endl;
    }else{
        cout << "LSB of " << num << " is not a set(0)" << endl;
    }

    return 0;
}
