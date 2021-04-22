#include <iostream>

using namespace std;

int main()
{
    int amount;
    int one_thousand, five_hun, one_hun;
    int fifty, twenty, ten, five, two, one;

    cout << "Enter amount >>> ";
    cin >> amount;

    one_thousand = amount / 1000;
    amount = amount % 1000;

    five_hun = amount / 500;
    amount = amount % 500;

    one_hun = amount / 100;
    amount = amount % 100;

    fifty = amount / 50;
    amount = amount % 50;

    twenty = amount / 20;
    amount = amount % 20;

    ten = amount / 10;
    amount = amount % 10;

    five = amount / 5;
    amount = amount % 5;

    two = amount / 2;
    amount = amount % 2;

    one = amount;

    cout << endl;

    cout << "Number of notes: " << endl;
    cout << "1000 ---> " << one_thousand << endl;
    cout << "500  ---> " << five_hun << endl;
    cout << "100  ---> " << one_hun << endl;
    cout << "50   ---> " << fifty << endl;
    cout << "20   ---> " << twenty << endl;
    cout << "10   ---> " << ten << endl;
    cout << "5    ---> " << five << endl;
    cout << "2    ---> " << two << endl;
    cout << "1    ---> " << one << endl;

    return 0;
}
