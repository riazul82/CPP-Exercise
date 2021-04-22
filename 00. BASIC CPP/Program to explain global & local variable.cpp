#include <iostream>

using namespace std;

int n = 10;

int main()
{
    int n = 20;
    {
        int n = 30;
        {
            int n = 40;
            cout << "Block 3: " << n << endl;
            cout << "Global : " << ::n << endl << endl;
        }
        cout << "Block 2: " << n << endl;
        cout << "Global : " << ::n << endl << endl;
    }
    cout << "Block 1: " << n << endl;
    cout << "Global : " << ::n << endl << endl;

    return 0;
}
