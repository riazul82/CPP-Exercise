#include <iostream>

#define IS_PRIME(X)                                 \
        bool isPrime = true;                        \
        for(int i = 2; i * i <= X; i ++){           \
            if(X % i == 0){                         \
                isPrime = false;                    \
                break;                              \
            }                                       \
        }                                           \
        if(isPrime == true){                        \
            cout << num << " is Prime!" << endl;    \
        }else{                                      \
            cout << num << " is not Prime!" << endl;\
        }

using namespace std;

int main()
{
    int num;

    cout << "Enter a number >>> ";
    cin >> num;

    cout << endl;

    IS_PRIME(num);

    return 0;
}
