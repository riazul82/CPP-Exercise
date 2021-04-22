#include <iostream>

// #define DHA true
#define SYL true

#ifndef DHA
    #define DIS_KM 250
#endif

#ifndef SYL
    #define DIS_KM 275
#endif

using namespace std;

int main()
{
    double cost, tcost;

    cout << "Enter cost per km >>> ";
    cin >> cost;

    cout << endl;

    tcost = cost * DIS_KM;

    cout << "Total Cost: " << tcost << " Tk." << endl;

    return 0;

}


