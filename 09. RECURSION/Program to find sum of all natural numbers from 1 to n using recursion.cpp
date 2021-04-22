#include <iostream>

using namespace std;

int sum_all(int l){

    if(l < 1){
        return 0;
    }

    return l + sum_all(l - 1);
}

int main()
{
    int lnum;
    int sum;

    cout << "Enter last number >>> ";
    cin >> lnum;

    cout << endl;

    sum = sum_all(lnum);

    cout << "Sum is: " << sum << endl;

    return 0;
}
