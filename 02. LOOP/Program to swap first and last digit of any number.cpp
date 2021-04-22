#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num;
    int digits;
    int first, last;
    int swapped_num;

    cout << "Enter number >>> ";
    cin >> num;

    cout << endl;

    last = num % 10;
    digits = (int)log10(num);
    first = num / pow(10, digits);

    swapped_num = last * (int)round((int)pow(10, digits));
    swapped_num += num % (int)pow(10, digits);
    swapped_num /= 10;
    swapped_num *= 10;
    swapped_num += first;

    cout << "Swapped number: " << swapped_num << endl;


    return 0;
}

