#include<iostream>
using namespace std;
int main() {
    int n, *p, sum=0;
    cout<<"How many elements?"<<endl;
    cin>>n;
    p = new int[n];
    cout<<"Enter elements";
    for(int i =0; i<n;i++)
    cin>>p[i];
    for(int i =0;i<n;i++)
    sum = sum + p[i];

    float avg = static_cast<float> (sum/n);
    cout<<"Sum= "<<sum<<endl;
    cout<<"Average= "<<avg;
    delete[]p;
return 0;
}