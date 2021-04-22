#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int decimal, binary;
    int n, i, ldec;

    cout << "Enter last decimal number >>> ";
    cin >> ldec;

    cout << endl;

    cout << "      DEC -------> BIN" << endl;

    for(i = 1; i <= ldec; i ++){

        cout << setw(8) << i << "    --->    ";

        decimal = i;
        binary = 0;
        n = 1;

        while(decimal != 0){
            binary += n * (decimal & 1);
            decimal >>= 1;
            n *= 10;
        }

        cout << binary << endl;

    }

    return 0;
}

