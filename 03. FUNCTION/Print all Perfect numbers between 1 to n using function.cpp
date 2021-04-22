#include <iostream>

using namespace std;

void allPerfect(int n){
    int i, j;
    int sum;
    cout << "All Perfect numbers between 1 to " << n << " are: ";
    for(i = 1; i <= n; i ++){
        sum = 0;
        for(j = 1; j < i; j ++){
            if(i % j == 0){
                sum += j;
            }
        }
        if(sum == i){
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    int num;

    cout << "Enter number >>> ";
    cin >> num;

    cout << endl;

    allPerfect(num);

    return 0;
}
