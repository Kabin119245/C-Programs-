#include<iostream>

using namespace std;
void defaultarg(char mychar[50]="Pokhara", int n = 5)
{
    char *p = mychar;
    int num = n;
    for(int i = 0; i <=n-1; i ++) {
        cout<<p[i];
    }
    cout<<endl<<"Number of characters displayed is:" <<n<<endl;

}
int main() {
    //defaultarg();
    defaultarg("Kathmandu", 7);
    return 0;
   
}