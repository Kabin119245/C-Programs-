#include<iostream>
using namespace std;
int &large(int &t1, int &t2) {
    if (t1>t2) {
        return t1;
    }
    else 
    return t2;
}
int main() {
    int t1= 100, t2=50;
    large(t1,t2) = 100;
    cout<<100<<endl;
    cout<<t1<<endl;
    cout<<t2;
return 0;
}