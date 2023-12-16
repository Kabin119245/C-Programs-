#include<iostream>
using namespace std;

class Staff {
    protected:
    int staff_id;
    public:
    void getid() {
        cout<<"Enter  ID:"<<endl;
        cin>>staff_id;

    }
    void display() {
    cout<<"ID="<<staff_id<<endl; 
    }
};

class Lecturer : public Staff {
    public:
    char subject[50];
    void getsubject( ) {
        cout<<"Enter  subject:"<<endl;
        cin>>subject;

    }
    void display() {
    cout<<"ID="<<staff_id<<"Subject= "<<subject<<endl; 
    }

};

class Admin : public Staff {
    public:
    char post_dept[50];
    void getpostdept() {
        cout<<"Enter  Department:"<<endl;
        cin>>post_dept;
    }
    void display() {
    cout<<"ID="<<staff_id<<"Post_dept= "<<post_dept<<endl; 
    }

};

class Librarian : public Staff {
    public:
    char shift[50];
void getshift(){
        cout<<"Enter  shift:"<<endl;
        cin>>shift;
    }
    void display() {
    cout<<"ID="<<staff_id<<"Shift= "<<shift<<endl; 
    }

    

};

int main() {
    Lecturer l;
    Admin a;
    Librarian lb;
    l.getid();
    l.getsubject();
    a.getid();
    a.getpostdept();
    lb.getid();
    lb.getshift();
    l.display();
    a.display();
    lb.display();
return 0;
}