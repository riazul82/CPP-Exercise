#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Enter number >>> ";
    cin >> num;

    cout << endl;

    switch(num > 0){
    case 0:
        switch(num < 0){
        case 0:
            cout <<"It's zero!" << endl;
            break;
        case 1:
            cout << num << " is negative!" << endl;
            break;
        }
        break;
    case 1:
        cout << num << " is positive!" << endl;
        break;
    }
}
