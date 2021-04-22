#include <iostream>

using namespace std;

int main()
{
    int days, weeks, months, years;

    cout << "Enter days >>> ";
    cin >> days;

    years = days / 365;
    days = days % 365;

    months = days / 30;
    days = days % 30;

    weeks = days / 7;
    days = days % 7;

    cout << endl;

    cout << "Result: " << years << " years, " << months << " months, ";
    cout << weeks << " weeks, " << days << " days." << endl;

    return 0;
}
