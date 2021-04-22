#include <iostream>
#define SIZE 8

using namespace std;

int main()
{
    int i;
    char bin[SIZE + 1];
    char com[SIZE + 1];
    bool error = false;

    cout << "Enter your binary number (8 bit) >>> ";
    for(i = 0; i < SIZE; i ++){
        cin >> bin[i];
    }

    for(i = 0; i < SIZE; i ++){
        if(bin[i] == '1'){
            com[i] = '0';
        }else if(bin[i] == '0'){
            com[i] = '1';
        }else{
            error = true;
            break;
        }
    }

    cout << endl;

    if(error == false){
        cout << "One's Complement: ";
        for(i = 0; i < SIZE; i ++){
            cout << com[i];
        }
        cout << endl;
    }else{
        cout << "Error!" << endl;
    }

    return 0;
}
