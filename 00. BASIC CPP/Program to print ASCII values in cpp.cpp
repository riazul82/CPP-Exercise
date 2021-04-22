#include <iostream>

using namespace std;

int main()
{
    int i;

    for(i = 33; i < 255; i ++){
        cout << "ASCII Values for " << i << " is " << (char)i << endl;
    }

    return 0;
}
