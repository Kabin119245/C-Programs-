#include<iostream>
using namespace std;
class employee
{
protected:
    float salary;
public:
 void get_sal(float s){
    salary = s;
 }
};
class HOD: public employee
{
private:
    float bonus;
public:
    void get_bonus(float b) {
        bonus = b;
    }
    void put_net() {
        cout<<"Net salary ="<<salary + bonus;
    }
};
class DHOD: public employee {
    float bonus;
    public:
    void get_bonus(float b){
        bonus = b;
    }
        void put_net(){
                cout<<"Net salary="<<salary+bonus;
        }
    
};
int main(){
    HOD h;
    cout<<"Salary of HOD"<<endl;
    h.get_sal(15000);
    h.get_bonus(5000);
    h.put_net();

    DHOD d;
    cout<<"Salary of DHOD"<<endl;
    d.get_sal(10000);
    d.get_bonus(4000);
    d.put_net();
    return 0;
    
}



