#include<iostream>
using namespace std;

class Distance {
    int  meter, centi;
    public:
    Distance(int m, int cm){
        meter = m;
        centi = cm;
    }
    Distance() {
        meter = 0;
        centi = 0;

    }
    Distance operator ++() {
        Distance d;
        d.centi = ++centi;
        d.meter = ++meter;
        if(d.centi >= 100) {
            ++d.meter;
            d.centi = d.centi - 100;

        }
        return d;

    }
    void display() {
        cout<<meter<<"m"<<centi<<"cm" <<endl;

    }
};

int main() {
    Distance dis(100,50) , dis1;
    cout<<"The original distance"<<endl;
    dis.display();
    dis1 = ++dis;
    dis1.display();
    cout<<"The value of object dis"<<endl;
    dis.display();
    

}