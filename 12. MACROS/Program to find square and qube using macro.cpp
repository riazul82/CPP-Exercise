#include <iostream>

#define SQ(X) X * X
#define QB(X) X * X * X

using namespace std;

int main()
{
    int square, qube;

    square = SQ(2);
    qube = QB(3);

    cout << "Square: " << square << endl;
    cout << "Qube: " << qube << endl;

    return 0;
}
