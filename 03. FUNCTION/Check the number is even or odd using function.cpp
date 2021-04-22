#include <iostream>

using namespace std;

void func(int n){
    if(n % 2){
        cout << n << " is Odd number!" << endl;
    }else{
        cout << n << " is Even number!" << endl;
    }
}

int main()
{
    int num;

    cout << "Enter number >>> ";
    cin >> num;

    cout << endl;

    func(num);

    return 0;
}
