#include<iostream>
using namespace std;

inline float  tax(float amt) {
    float final;
    final = amt - 0.1 * amt;
    return final;
}

int main() {
float amt;
cout<<"Enter your salary"<<endl;
cin>>amt;
cout<<"After paying tax: "<<tax(amt);

return 0;
}