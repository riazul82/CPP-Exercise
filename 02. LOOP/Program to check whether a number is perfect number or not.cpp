#include <iostream>

using namespace std;

int main()
{
    int i, num;
    int sum = 0;

    cout << "Enter number >>> ";
    cin >> num;

    cout << endl;

    for(i = 1; i < num; i ++){
        if(num % i == 0){
            sum += i;
        }
    }

    if(sum == num){
        cout << num << " is Perfect number!" << endl;
    }else{
        cout << num << " is not Perfect number!" << endl;
    }

    return 0;
}
