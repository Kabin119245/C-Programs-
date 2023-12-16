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

     friend Complex operator +(Complex, Complex);
        
    void display() {
        cout<<real<<"+"<<img<<"j"<<endl;

    }
};
Complex operator +(Complex c1, Complex c2){
    Complex temp;
        temp.real = c1.real + c2.real;
        temp.img = c1.img + c2.img;
        return temp;
  }

int main() {
    Complex c1, c2, c3;
    c1 = Complex(3,2);
    c2 = Complex(4,5);
    c3 = c1 + c2;
    cout<<"c1=";
    c1.display();
    cout<<endl<<"c2=";
    c2.display();
    cout<<"c3=";
    c3.display();
return 0;

}