#include <iostream>

#define MAKE_STR(X) #X

using namespace std;

int main()
{
    cout << MAKE_STR(Welcome to C ++) << endl;

    return 0;
}
