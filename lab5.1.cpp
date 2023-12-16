#include<iostream>
using namespace std;

class Time {
    private:
    int minute;
    float second;

    public: 
    Time() {
        minute = 0;
        second = 0;

    }
    Time (float h) {
        float hour;
        hour = h * 60;
        minute = h * 60;
        second = (hour - minute) * 60 ;
    }

    void display() {
        cout<<minute<<" minutes "<<second<<" seconds"<<endl;
    }

};
int main() {
    Time T;
    float hr;
    cout<<"Enter time in hour"<<endl;
    cin>>hr;
    T = hr;
    T.display();


}