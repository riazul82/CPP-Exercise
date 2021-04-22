#include <iostream>

using namespace std;

int main()
{
    int num;
    int i;

    cout << "Enter number >>> ";
    cin >> num;

    cout << endl << "All Factors: ";
    for(i = 1; i <= 12; i ++){
        if(num % i == 0){
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
