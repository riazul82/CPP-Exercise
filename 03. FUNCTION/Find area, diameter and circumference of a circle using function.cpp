#include <iostream>
#define PI 3.1416

using namespace std;

double area(int r){
    return PI * r * r;
}

double diameter(int r){
    return 2 * r;
}

double circumference(int r){
    return 2 * PI * r;
}

int main()
{
    double radius;
    double a, c, d;

    cout << "Enter radius >>> ";
    cin >> radius;

    a = area(radius);
    c = circumference(radius);
    d = diameter(radius);

    cout << endl;

    cout << "Area: " << a << " sq.units" << endl;
    cout << "Diameter: " << d << " units" << endl;
    cout << "Circumference: " << c << " units" << endl;

    return 0;
}
