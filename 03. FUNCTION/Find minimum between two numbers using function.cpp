#include <iostream>

using namespace std;

int minimum(int n1, int n2){
    return (n1 < n2)? n1: n2;
}

int main()
{
    int num1, num2;
    int miN;

    cout << "Enter two numbers >>> ";
    cin >> num1 >> num2;

    miN = minimum(num1, num2);

    cout << endl;

    cout << "Min: " << miN << endl;

    return 0;
}

