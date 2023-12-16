#include <iostream>
using namespace std;
class Distance {
    private:
    int len;
    public:
    void input(){
        cout<<"Enter the value of distance"<<endl;
        cin>>len;
        
    }
    friend int operator >(Distance len1, Distance len2);
    friend int operator ==(Distance len1, Distance len2);
    
};

     int operator >(Distance len1, Distance len2) {
        if(len1.len>len2.len)
        
       { return 1;}
        else 
      {  return 0;}
    }
    
     int operator ==(Distance len1, Distance len2) {
        if(len1.len == len2.len)
    {    return 1;}
        else 
       { return 0;}
        
    }
 int main() {
     Distance len1, len2;
     len1.input();
     len2.input();
     if (len1 > len2) 
  {   cout<<"Lenght 1 is greater"<<endl;}
     else if(len1 == len2) 
     {cout<<"Both lenght are equal"<<endl;}
     else
     {cout<<"Lenght 2 is greater"<<endl;}
     
return 0;
     
 }