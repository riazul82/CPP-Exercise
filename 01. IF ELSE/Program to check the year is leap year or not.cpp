#include <iostream>

using namespace std;

int main()
{
    int year;

    cout << "Enter year >>> ";
    cin >> year;

    cout << endl;

    if(year % 400 == 0){
        cout  << year << " is a Leap Year!" << endl;
    }else if(year % 100 == 0){
        cout << year << " is not a Leap Year!" << endl;
    }else if(year % 4 == 0){
        cout << year << " is a Leap Year!" << endl;
    }else{
        cout << year << " is not a Leap Year!" << endl;
    }

    return 0;
}
