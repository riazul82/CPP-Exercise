#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    int sum;

    cout << "Enter three angles >>> ";
    cin >> x >> y >> z;

    sum = x + y + z;

    cout << endl;

    if(sum == 180){
        cout << "The triangle is valid!" << endl;
    }else{
        cout << "The triangle is not valid!" << endl;
    }

    return 0;
}
