#include <iostream>

using namespace std;

int main()
{
    int i;

    cout << "UPPERCASE: ";
    for(i = 65; i <= 90; i ++){
        cout << (char)i << " ";
    }

    cout << endl << endl;

    cout << "LOWERCASE: ";
    for(i = 97; i <= 122; i ++){
        cout << (char)i << " ";
    }

    cout << endl;

    return 0;
}
