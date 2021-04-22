#include <iostream>

#define MAX(X, Y) (X > Y)? X: Y
#define MIN(X, Y) (X < Y)? X: Y

using namespace std;

int main()
{
    int num1, num2;
    int Max, Min;

    cout << "Enter two numbers >>> ";
    cin >> num1 >> num2;

    cout << endl;

    Max = MAX(num1, num2);
    Min = MIN(num1, num2);

    cout << "Max: " << Max << endl;
    cout << "Min: " << Min << endl;

    return 0;
}
