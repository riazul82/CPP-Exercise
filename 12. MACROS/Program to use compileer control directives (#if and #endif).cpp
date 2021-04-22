#include <iostream>

#define DHA true
// #define SYL true

#if(defined DHA)
    #define DIS_KM 250
#endif

#if(defined SYL)
    #define DIS_KM 300
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
