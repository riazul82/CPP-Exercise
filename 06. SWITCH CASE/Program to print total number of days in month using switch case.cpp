#include <iostream>

using namespace std;

int main()
{
    int num;

    label:
    cout << "Enter month number(1 - 12) >>> ";
    cin >> num;

    cout << endl;

    if(num > 12){
        cout << "Invalid month number! Input again!";
        cout << endl << endl;
        goto label;
    }

    switch(num){
        case 1:
            cout << "31 days" << endl;
            break;
        case 2:
            cout << "28 days" << endl;
            break;
        case 3:
            cout << "31 days" << endl;
            break;
        case 4:
            cout << "30 days" << endl;
            break;
        case 5:
            cout << "31 days" << endl;
            break;
        case 6:
            cout << "30 days" << endl;
            break;
        case 7:
            cout << "31 days" << endl;
            break;
        case 8:
            cout << "31 days" << endl;
            break;
        case 9:
            cout << "30 days" << endl;
            break;
        case 10:
            cout << "31 days" << endl;
            break;
        case 11:
            cout << "30 days" << endl;
            break;
        case 12:
            cout << "31 days" << endl;
            break;
    }
    return 0;
}

