#include <iostream>

#define MAX true

using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter two number >>> ";
    cin >> num1 >> num2;

    cout << endl;

    #if MAX == true
        cout << "MAX: " << ((num1 > num2)? num1: num2) << endl;
    #else
        cout << "MIN: " << ((num1 < num2)? num1: num2) << endl;
    #endif // MAX

    return 0;
}
