#include<iostream>
using namespace std;
int volume(int);
double volume(double, int);
long volume(long, int, int);
 int main(){
cout<<volume(5)<<endl;
cout<<volume(1.5,5)<<endl;
cout<<volume(100l,75,10)<<endl;

return 0;

 }

 int volume (int s){
    return(s*s*s);
 }

 double volume(double r, int h) {
    return(3.145*r*r*h);
 }

 long volume (long l, int b, int h){
    return(l*b*h); 
    }