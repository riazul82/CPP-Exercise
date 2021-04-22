#include <iostream>

using namespace std;

int fact(int a){
    int factorial = 1;
    while(a != 0){
        factorial *= a;
        a --;
    }
    return factorial;
}

int isStrong(int n){
    int x;
    int sum, last;

    x = n;
    sum = 0;

    while(x != 0){
        last = x % 10;
        sum += fact(last);
        x /= 10;
    }

    if(n == sum){
        return 1;
    }else{
        return 0;
    }
}

int main()
{
    int num;

    cout << "Enter number >>> ";
    cin >> num;

    cout << endl;

    if(isStrong(num)){
        cout << num << " is strong number!" << endl;
    }else{
        cout << num << " is not strong number!" << endl;
    }

    return 0;

}
