#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter three sides >>> ";
    cin >> a >> b >> c;

    cout << endl;

    if(a + b > c){
        if(b + c > a){
            if(c + a > b){
                cout << "The triangle is valid!" << endl;
            }else{
                cout << "The triangle is not valid!" << endl;
            }
        }else{
            cout << "The triangle is not valid!" << endl;
        }
    }else{
        cout << "The triangle is not valid!" << endl;
    }

    return 0;
}
