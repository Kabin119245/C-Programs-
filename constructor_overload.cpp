#include<iostream>
using namespace std;

class Account {
    private:
    int accno;
    float balance;
    public:
    Account()
    {
        accno = 12345;
        balance = 2550.10;

    }
    Account(int acc)
    {
        accno = acc;
        balance = 0.0;

    }
    Account (int acc, float bal) {
        accno = acc;
        balance = bal;
    }
    void display() {
        cout<<accno<<endl;
        cout<<balance<<endl;
    }
};
int main() {
    Account acc1;
    Account acc2(100);
    Account acc3(1245, 100.23);
    cout<<"Account Info"<<endl;
    acc1.display();
    acc2.display();
    acc3.display();

}