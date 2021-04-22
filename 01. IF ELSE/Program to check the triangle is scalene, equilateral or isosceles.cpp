#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter three sides of a valid triangle >>> ";
    cin >> a >> b >> c;

    cout << endl;

    if(a == b && b == c && c == a){
        cout << "The triangle is Equilateral!" << endl;
    }else if(a == b || b == c || c == a){
        cout << "The triangle is Isosceles!" << endl;
    }else{
        cout << "The triangle is Scalene!" << endl;
    }

    return 0;
}
