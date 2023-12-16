#include<iostream>
#include<string.h>
using namespace std;

class Cstring {
    private:
    char str[30];
    public:
    void getdata(){
        cout<<"Enter any string"<<endl;
        cin>>str;

    }
  

    void display() {
        cout<<"The given string is "<<str<<endl;

    }


 friend Cstring operator +(string s1, string s2) {
    string s3;
    strcpy(s3.str, s1.str); 
        strcat(s3.str, " ");
        strcat(s3.str, s2.str);
        return s3;
    }
};

int main() {
    Cstring s1, s2, s3;
    s1.getdata;
    s2.getdata;
    s3 = s1 + s2;

return 0;
}