#include <iostream>

using namespace std;

int main()
{
    int i, j;
    int num, sum;

    cout << "Enter number >>> ";
    cin >> num;

    cout << endl << "Perfect numbers are: ";
    for(i = 1; i <= num; i ++){
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

    return 0;
}
