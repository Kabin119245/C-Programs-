#include<iostream>
using namespace std;
class Second;
class First {
 int data1;
 public:
 void getdata1(int x) {
   data1 = x;
 }
 friend int max(First, Second);
};

class Second {
int data2;
public: 
void getdata2(int y) {
    data2 = y;
}
friend int max(First, Second);
};
int max(First a, Second b){
    if (a.data1 > b.data2)
    return a.data1;
    else
    return b.data2;
}

int main() {
    First a;
    a.getdata1(100);
    Second b;
    b.getdata2(200);
    cout<<"Max value is: "<<max(a,b);
return 0;
}