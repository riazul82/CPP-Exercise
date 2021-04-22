#include <iostream>

using namespace std;

int find_lcm(int n1, int n2){

    static int multiple = 0;

    multiple += n2;

    if(multiple % n1 == 0 && multiple % n2 == 0){
        return multiple;
    }else{
        return find_lcm(n1, n2);
    }
}

int main()
{
    int num1, num2;
    int lcm;

    cout << "Enter two numbers >>> ";
    cin >> num1 >> num2;

    if(num1 > num2){
        lcm = find_lcm(num2, num1);
    }else{
        lcm = find_lcm(num1, num2);
    }

    cout << endl;

    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm << endl;

    return 0;
}
