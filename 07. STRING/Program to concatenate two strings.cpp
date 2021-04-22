#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int i, j;
    char name[100];
    char fname[100];
    char lname[100];

    cout << "Enter your first name >>> ";
    cin.getline(fname, 100);

    cout << "Enter your last name >>> ";
    cin.getline(lname, 100);

    cout << endl;

    i = 0;
    j = 0;

    while(fname[i] != '\0'){
        name[i] = fname[i];
        i ++;
    }

    while(lname[j] != '\0'){
        name[i] = lname[j];
        i ++;
        j ++;
    }

    name[i] = '\0';

    cout << "Full name: " << name << endl;

    return 0;
}
