#include<iostream>
using namespace std;

class Fahrenheit {
    private:
    float temp;
    public:
    Fahrenheit() {
        temp = 0;
    }

    Fahrenheit (float n) {
        temp = n;
    }
    void display() {
        cout<<"Temperature in Fahrenheit is:" <<temp<<endl;
    }
};
class Centigrade {
    private:
    float cent;
    public:
    Centigrade() {
        cent = 0;
    }
    Centigrade(float t){
        cent = t;
    }

    operator Fahrenheit() {
        float temp;
        temp = (cent * 9)/5 + 32;
        return Fahrenheit(temp);
    }
};

int main() {
    Fahrenheit f;
    Centigrade c(100);
    f = c;
    f.display();
return 0;
}