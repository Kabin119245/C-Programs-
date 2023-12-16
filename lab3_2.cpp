#include<iostream>  
using namespace std;
 class Length {
    private:
    int feet, inch;
    public:
    void getlength() {
        cout<<"Enter feet"<<endl;
        cin>>feet;
        cout<<"Enter inch"<<endl;
        cin>>inch;
    }
    void display() {
        cout<<"The sum is: "<<feet<<"feet"<<"and "<<inch<<"inches"<<endl;

    }
    void sum(Length l1, Length l2) {
        feet = l1.feet + l2.feet;
        inch = l1.inch + l2.inch;
        if (inch >12){
            feet++;
            inch = inch -12;
              
        }

    }
 };

 int main() {
    
    Length l1, l2, l3;
    cout<<"Enter 1st lenght in feet and inch"<<endl;
    l1.getlength();
    cout<<"Enter 2nd lenght in feet and inch"<<endl;
    l2.getlength();
    l3.sum(l1,l2);  //passing object as argument.
    l3.display();

return 0;

 }