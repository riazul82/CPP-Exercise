#include <iostream>

using namespace std;

int main()
{
    int radius;
    const float PI = 3.1416;
    double area;

    cout << "Enter radius >>> ";
    cin >> radius;

    area = PI * radius * radius;

    cout << endl;

    cout << "Area of circle: " << area << " sq m." << endl;

    return 0;
}
