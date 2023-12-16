#include<iostream>
using namespace std;

class Celsius {
    float c,f;
public:
    void getdata() {
        cout<<"Enter temperature in celsius";
        cin>>c;

    }
    void calculate(){
        f = c*(9/5) + 32;

    }
     void display() {
        cout<<"Temperature in fahrenheit is:"<<f;
        
     }

};
class Fahrenheit {
    float c,f;
    public:
     void getdata() {
        cout<<"Enter temperature in fahrenheit";
        cin>>f;

    }
    void calculate(){
        c = (5/9) *(f-32);

    }
     void display() {
        cout<<"Temperature in clesius is:"<<c;
        
     }


};
int main() {
    Celsius a;
    a.getdata();
    a.calculate();
    a.display();

    Fahrenheit b;
     b.getdata();
    b.calculate();
    b.display();

}

