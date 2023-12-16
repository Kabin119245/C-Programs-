#include<iostream>
using namespace std;
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

   float gett() {
    return cent;
   }
};

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

    Fahrenheit (Centigrade p) {
        float c;
        c = p.gett();
        temp= (c * 9)/5 + 32;
    }
    void display() {
        cout<<"Temperature in Fahrenheit is:" <<temp<<endl;
    }
};


int main() {
    Fahrenheit f;
    Centigrade c(150);
    f = c;
    f.display();
return 0;
}