#include <iostream>

using namespace std;

int main()
{
    char str[100];
    int i, digit, alpha, spcha;

    cout << "Enter a String >>> ";
    cin.getline(str, 100);

    cout << endl;

    i = 0;

    digit = 0;
    alpha = 0;
    spcha = 0;

    while(str[i] != '\0'){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            alpha ++;
        }else if(str[i] >= 'a' && str[i] <= 'z'){
            alpha ++;
        }else if(str[i] >= '0' && str[i] <= '9'){
            digit ++;
        }else{
            spcha ++;
        }
        i ++;
    }

    cout << "NUMBER OF >>>" << endl;
    cout << "DIGITS      : " << digit << endl;
    cout << "ALPHABETS   : " << alpha << endl;
    cout << "CHARACTERS  : " << spcha << endl;

    return 0;
}
