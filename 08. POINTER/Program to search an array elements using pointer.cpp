#include <iostream>

using namespace std;

int main()
{
    int ara[100];
    int i, siz, num, index;
    bool isFound = false;

    cout << "Enter array size >>> ";
    cin >> siz;

    cout << "Enter array elements >>> ";
    for(i = 0; i < siz; i ++){
        cin >> *(ara + i);
    }

    cout << "Enter a number to search >>> ";
    cin >> num;

    for(i = 0; i < siz; i ++){
        if(*(ara + i) == num){
            isFound = true;
            index = i;
            break;
        }
    }

    cout << endl;

    if(isFound == true){
        cout << num << " found in array at index " << index << endl;
    }else{
        cout << num << " not found!" << endl;
    }

    return 0;
}
