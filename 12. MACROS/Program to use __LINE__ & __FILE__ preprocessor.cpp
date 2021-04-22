#include <iostream>

using namespace std;

int main()
{
    cout << "FILE: " << __FILE__ << endl;
    cout << "LINE: " << __LINE__ << endl;

    #line 100
    cout << "FILE: " << __FILE__ << endl;
    cout << "LINE: " << __LINE__ << endl;

    #line 200
    cout << "FILE: " << __FILE__ << endl;
    cout << "LINE: " << __LINE__ << endl;


    return 0;
}
