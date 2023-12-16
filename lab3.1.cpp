#include<iostream>
using namespace std;
class Time
{
    int hr,min,sec;
    public:
    Time()
    {
        hr=0;
        min=0;
        sec=0;
    }
    Time(int h,int m,int s)
    {
        hr=h;
        min=m;
        sec=s;
    }
    void display()
    {
        cout<<hr<<":"<<min<<":"<<sec<<endl;
    }
    void add(Time a,Time b)
    {
        hr=a.hr+b.hr;
        min=a.min+b.min;
        sec=a.sec+b.sec;
        if(sec>=60)
        {
            sec=sec-60;
            min++;
        }
        if(min>=60)
        {
            min=min-60;
            hr++;
        }

    }
};
 int main() {
    Time a(12,34,56) , b(10,35,14),c;

    c.add(a,b);  
    c.display();
 }