#include <iostream>
#define PI 3.1416

using namespace std;

int main()
{
    cout << "Before Redefine ~ ";
    cout << "Value of PI: " << PI << endl;

    #ifdef PI
    #undef PI
    #endif // PI

    #define PI 3.14159

    cout << "After Redefine ~ ";
    cout << "Value of PI: " << PI << endl;
}
