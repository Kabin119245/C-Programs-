#include<iostream>
using namespace std;

class A {
    public:
    int x;
    void get_x(int);

    
};
class B {
    public:
    int y;
    void get_y(int);

};

class C: public A, public B {
    public:
    void display();
};

void A::get_x(int a) {
    x=a;
}

void B::get_y(int b) {
    y=b;
}

void C::display() {
    cout<<"x=" <<x<<endl;
    cout<<"y=" <<y<<endl;

}
int main() {
    C j;
    j.get_x(100);
    j.get_y(50);
    j.display();
return 0;
}

