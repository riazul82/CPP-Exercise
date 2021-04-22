#include <iostream>

using namespace std;

int isPerfect(int n){
    int i, sum = 0;
    for(i = 1; i < n; i ++){
        if(n % i == 0){
            sum += i;
        }
    }
    if(sum == n){
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

    if(isPerfect(num)){
        cout << num << " is Perfect number!" << endl;
    }else{
        cout << num << " is not Perfect number!" << endl;
    }

    return 0;
}
