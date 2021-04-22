#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;

    x = 10;
    y = x;

//    Explanation: Prefix  ---> ++ x or -- x
//                 Postfix ---> x ++ or x --
//
//                 In prefix, first occurs increment or decrement and then assignment
//                 operation performs.
//                 But In postfix, first occurs assignment operation and then increment
//                 or decrement performs.

    cout << "x = " << x << " y = " << y << endl;

    y = x ++;

    cout << "x = " << x << " y = " << y << endl;

    y = x --;

    cout << "x = " << x << " y = " << y << endl;

    y = ++ x;

    cout << "x = " << x << " y = " << y << endl;

    y = -- x;

    cout << "x = " << x << " y = " << y << endl;

    return 0;
}
