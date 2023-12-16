#include<iostream>
using namespace std;

class Time {
    private:
    float sec, min;
    public:
    Time() {
        sec = 0;
        min = 0;

    }
    Time (float m, float s) {
        min = m;
        sec = s;

    }
    operator float() {
        float hr;
        min = min /60.0;
        sec = sec / 3600.0;
        hr = min + sec;
        return hr;
    }
};

int main() {
    Time T;
    float min, sec, h;
    cout<<"Enter time in min and sec"<<endl;
    cin>>min>>sec;
    T = Time(min,sec);
    h = T;
    cout<<"Equivalent time in hour is "<<h;

return 0;
}