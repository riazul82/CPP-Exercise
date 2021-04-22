#include <iostream>

using namespace std;

int qube(int n){
    return n * n * n;
}

int main()
{
    int num, q;

    cout << "Enter number >>> ";
    cin >> num;

    q = qube(num);

    cout << endl << "Qube of " << num << " is: " << q << endl;

    return 0;
}
