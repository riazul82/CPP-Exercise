#include <iostream>

#define PI 3.14

#ifdef PI
    #undef PI
#endif // PI

#define PI 3.1416

using namespace std;

int main()
{
    cout << "Value of PI: " << PI << endl;

    return 0;
}
