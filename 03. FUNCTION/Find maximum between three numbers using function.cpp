#include <iostream>

using namespace std;

int maximum(int n1, int n2, int n3){
    return n1 > n2? (n1 > n3? n1: n3): n2 > n3? n2: n3;
}

int main()
{
    int num1, num2, num3;
    int maX;

    cout << "Enter three numbers >>> ";
    cin >> num1 >> num2 >> num3;

    cout << endl;

    maX = maximum(num1, num2, num3);

    cout << "Max: " << maX << endl;

    return 0;
}
