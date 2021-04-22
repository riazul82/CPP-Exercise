#include <iostream>

using namespace std;

double power(double n, int e){
    if(e == 0){
        return 1;
    }else if(e > 0){
        return n * power(n, e - 1);
    }else{
        return 1 / power(n, -e);
    }
}

int main()
{
    double num, res;
    int exp;

    cout << "Enter a number >>> ";
    cin >> num;

    cout << "Enter exponent >>> ";
    cin >> exp;

    res = power(num, exp);

    cout << endl;

    cout << num << " ^ " << exp << " = " << res << endl;

    return 0;
}
