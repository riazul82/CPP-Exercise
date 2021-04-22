#include <iostream>

using namespace std;

void print_num(int l){

    static int n = 1;

    if(n > l){
        return;
    }

    cout << n << " ";

    n ++;

    return print_num(l);
}

int main()
{
    int last;

    cout << "Enter last number >>> ";
    cin >> last;

    cout << endl;

    cout << "All natural numbers between 1 to " << last << " : ";

    print_num(last);

    cout << endl;

    return 0;
}
