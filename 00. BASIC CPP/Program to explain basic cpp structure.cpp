#include <iostream>

using namespace std;

class Distance{
public:
    int kilometer;
    double meter;

    Distance(){
        kilometer = 0;
        meter = 0.0;
    }

    Distance(int km, double m){
        kilometer = km;
        meter = m;
    }

    void getDist();
    void showDist();
    void addDist(Distance, Distance);

};

void Distance::getDist(){
    cout << "Enter kilometer >>> ";
    cin >> kilometer;
    cout << "Enter meter >>> ";
    cin >> meter;
}

void Distance::showDist(){
    cout << " " << kilometer << "km " << meter << "m ";
}

void Distance::addDist(Distance dd1, Distance dd2){
    kilometer = dd1.kilometer + dd2.kilometer;
    meter = dd1.meter + dd2.meter;
    while(meter >= 1000){
        meter -= 1000;
        kilometer ++;
    }
}

int main()
{
    Distance d1;
    Distance d2(10, 2000);
    Distance d3;

    d1.getDist();
    d3.addDist(d1, d2);

    cout << endl;
    cout << "Result:";
    d1.showDist();
    cout << "+";
    d2.showDist();
    cout << "=";
    d3.showDist();
    cout << endl;

    return 0;
}
