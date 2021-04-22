#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Enter day number(1 to 7) >>> ";
    cin >> num;

    cout << endl;

    if(num == 1){
        cout << "Saturday" << endl;
    }else if(num == 2){
        cout << "Sunday" << endl;
    }else if(num == 3){
        cout << "Monday" << endl;
    }else if(num == 4){
        cout << "Tuesday" << endl;
    }else if(num == 5){
        cout << "Wednesday" << endl;
    }else if(num == 6){
        cout << "Thursday" << endl;
    }else if(num == 7){
        cout << "Friday" << endl;
    }else{
        cout << "Invalid Input" << endl;
    }

    return 0;
}
