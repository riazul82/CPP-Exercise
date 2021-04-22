#include <iostream>
#include <conio.h>

#define PI 3.1416

using namespace std;

int main()
{
    int radius;
    double area;

    cout << "Enter radius >>> ";
    cin >> radius;

    area = PI * radius * radius;

    cout << endl;

    cout << "Area of circle: " << area << " sq m." << endl;

    getch();

    return 0;
}
