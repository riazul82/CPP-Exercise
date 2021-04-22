#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x = 789;
    int y = 78901;
    int z = 7890123;

    cout << setw(10) << x << endl;
    cout << setw(10) << y << endl;
    cout << setw(10) << z << endl;

    return 0;
}
