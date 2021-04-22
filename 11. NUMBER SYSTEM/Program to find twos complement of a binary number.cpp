#include <iostream>
#define SIZE 8

using namespace std;

int main()
{
    int i, carry = 1;
    char bin[SIZE + 1];
    char comp1[SIZE + 1];
    char comp2[SIZE + 1];

    cout << "Enter binary number (8 bit) >>> ";
    cin.getline(bin, SIZE + 1);

    cout << endl;

    for(i = 0; i < SIZE; i ++){
        if(bin[i] == '1'){
            comp1[i] = '0';
        }else if(bin[i] == '0'){
            comp1[i] = '1';
        }else{
            cout << "Error!" << endl;
            return 0;
        }
    }

    comp1[SIZE] = '\0';

    for(i = SIZE - 1; i >=0; i --){
        if(comp1[i] == '1' && carry == 1){
            comp2[i] = '0';
        }else if(comp1[i] == '0' && carry == 1){
            comp2[i] = '1';
            carry = 0;
        }else{
            comp2[i] = comp1[i];
        }
    }

    comp2[SIZE] = '\0';

    cout << "Two's Compliment: " << comp2 << endl;

    return 0;
}
