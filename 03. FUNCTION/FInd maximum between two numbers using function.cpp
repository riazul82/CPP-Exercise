#include <iostream>

using namespace std;

int maximum(int n1, int n2){
    return (n1 > n2)? n1: n2;
}

int main()
{
    int num1, num2;
    int maX;

    cout << "Enter two numbers >>> ";
    cin >> num1 >> num2;

    maX = maximum(num1, num2);

    cout << endl;

    cout << "Max: " << maX << endl;

    return 0;
}
