#include <iostream>

using namespace std;

int main()
{
    int num;

    label:
    cout << "Enter day number(1 - 7) >>> ";
    cin >> num;

    cout << endl;

    if(num > 7){
        cout << "Invalid day number! Input again!" << endl;
        goto label;
    }

    switch(num){
        case 1:
            cout << "Saturday" << endl;
            break;
        case 2:
            cout << "Sunday" << endl;
            break;
        case 3:
            cout << "Monday" << endl;
            break;
        case 4:
            cout << "Tuesday" << endl;
            break;
        case 5:
            cout << "Wednesday" << endl;
            break;
        case 6:
            cout << "Thursday" << endl;
            break;
        case 7:
            cout << "Friday" << endl;
            break;
    }
    return 0;
}
