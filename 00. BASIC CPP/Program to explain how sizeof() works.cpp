#include <iostream>

using namespace std;

int main()
{
    bool b = true;
    char ch = 'A';
    short s = 10;
    int a = 1000;
    long l = 1234567890;
    float f = 15.57015;
    double d = 20.123456789;

    cout << "Bool   : " << sizeof(bool) << " bytes." << endl;
    cout << "Var    : " << sizeof(b) << " bytes." << endl << endl;

    cout << "Char   : " << sizeof(char) << " bytes." << endl;
    cout << "Var    : " << sizeof(ch) << " bytes." << endl << endl;

    cout << "Short  : " << sizeof(short) << " bytes." << endl;
    cout << "Var    : " << sizeof(s) << " bytes." << endl << endl;

    cout << "Int    : " << sizeof(int) << " bytes." << endl;
    cout << "Var    : " << sizeof(a) << " bytes." << endl << endl;

    cout << "Long   : " << sizeof(long) << " bytes." << endl;
    cout << "Var    : " << sizeof(l) << " bytes." << endl << endl;

    cout << "Float  : " << sizeof(float) << " bytes." << endl;
    cout << "Var    : " << sizeof(f) << " bytes." << endl << endl;

    cout << "Double : " << sizeof(double) << " bytes." << endl;
    cout << "Var    : " << sizeof(d) << " bytes." << endl << endl;

    return 0;
}
