#include<iostream>
using namespace std;

class Complex {
    int real, img;
public:
    Complex() {
        real = 0;
        img = 0;

    }
    Complex(int x, int y) {
        real = x;
        img = y;
    }
    friend Complex operator -(Complex); 
      

    
    void display() {
        cout<<"Real part: "<<real<<endl;
        cout<<"Imaginary part: "<<img<<endl;

    }

};
Complex operator -(Complex c1) {
      Complex temp;
        temp.real = -c1.real;
        temp.img = -c1.img;
        return temp;
}
int main() {
    Complex c1(5,6), c2;
    cout<<"The complex number is: "<<endl;
    c1.display();
    c2 = -c1;
    cout<<"The complex number after using unary minus "<<endl;
    c2.display();

return 0;
}