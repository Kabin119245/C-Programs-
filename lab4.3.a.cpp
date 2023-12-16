#include<iostream>
using namespace std;
class Complex {
    float real,img;
    public:
    Complex() {
        real= 0;
        img = 0;

    }
    Complex (float r, float i) {
        real =r;
        img = i;
    }
    Complex operator +(Complex c){
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
    void display() {
        cout<<real<<"+"<<img<<"j"<<endl;

    }
};
int main() {
    Complex c1(2,5), c2(4,6), c3;
    c3 = c1 + c2;
    cout<<"c1=";
    c1.display();
    cout<<endl<<"c2=";
    c2.display();
    cout<<"c3=";
    c3.display();
return 0;

}