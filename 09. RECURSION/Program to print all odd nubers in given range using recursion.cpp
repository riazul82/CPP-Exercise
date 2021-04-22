#include <iostream>

using namespace std;

void even_num(int f, int l){

    if(f > l){
        return;
    }

    if(f % 2 == 1){
        cout << f << " ";
    }

    return even_num(f + 1, l);
}

int main()
{
    int fnum, lnum;

    cout << "Enter first number >>> ";
    cin >> fnum;

    cout << "Enter last number >>> ";
    cin >> lnum;

    cout << endl;

    cout << "Odd numbers between " << fnum << " to " << lnum << " : ";

    even_num(fnum, lnum);

    cout << endl;

    return 0;
}


