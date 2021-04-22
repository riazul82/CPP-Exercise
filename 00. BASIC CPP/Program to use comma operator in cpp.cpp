#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    int num = 15;
    int sq, qube;

    c = (a = 10, b = 20, a + b);
    sq = (num * num), qube = (num * num * num);

    cout << c << endl;
    cout << sq << endl;
    cout << qube << endl;

    return 0;
}
