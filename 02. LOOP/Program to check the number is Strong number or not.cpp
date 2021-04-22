#include <iostream>

using namespace std;

int fact(int n){
    int factorial = 1;
    while(n != 0){
        factorial *= n;
        n --;
    }
    return factorial;
}

int main()
{
    int i, n;
    int num, sum;
    int last;

    cout << "Enter number >>> ";
    cin >> num;

    sum = 0;
    n = num;

    cout << endl;

    while(n != 0){
        last = n % 10;
        sum += fact(last);
        n /= 10;
    }

    if(sum == num){
        cout << num << " is Strong number!" << endl;
    }else{
        cout << num << " is not Strong number!" << endl;
    }

    return 0;

}
