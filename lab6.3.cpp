#include<iostream>
using namespace std;
class Base {
    protected:
    int l,b;
    public:
    
    int rect(int l, int b) {
        
        return(l*b);
    }
   // void display() {
      //  cout<<"Lenght"<<
   // }

};

class derived: public Base {
    public:
     int rect(int l, int b) {
        int area;
        area=(l*b);
    
    
        cout<<"Area of rectangle= "<<area<<endl;
    return 0;
    }

};

int main() {
    derived a;
    a.rect(5,5);
    cout<<a.Base::rect(7,5);
   

return 0;
}