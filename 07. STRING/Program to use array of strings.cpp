#include <iostream>
#define N 10

using namespace std;

int main()
{
    char name[N][30];

    cout << "Enter Student Names >>> " << endl;
    for(int i = 0; i < N; i ++){
        cout << "S" << i + 1 << " = ";
        cin.getline(name[i], 30);
    }

    cout << endl;

    cout << "Names are: " << endl;
    for(int i = 0; i < N; i ++){
        cout << name[i] << endl;
    }

    cout << endl;

    return 0;
}
