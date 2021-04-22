#include <iostream>

using namespace std;

void print_num(int f, int l){

    if(f > l){
        return;
    }

    cout << f << " ";

    return print_num(f + 1, l);
}

int main()
{
    int fnum, lnum;

    cout << "Enter first number >>> ";
    cin >> fnum;

    cout << "Enter last number >>> ";
    cin >> lnum;

    cout << endl;

    cout << "Natural numbers between " << fnum << " to " << lnum << " : ";

    print_num(fnum, lnum);

    cout << endl;

    return 0;
}
