#include <iostream>
#include <math.h>

using namespace std;

class Complex{
    private:
    double real;
    double img;

    public:
    Complex(double real, double img){
        this->real = real;
        this->img = img;
    }
    Complex();
    
    void print() {
        cout << this->real << " + i" << this->img << '\n'; }

    double computeAbs(){
        double res = sqrt(this->real * this->real + this->img * this->img);
        return res;
    }

    bool operator <(const double &d){
        return this->computeAbs() < d;
    }
    bool operator >(const double &d){
        return this->computeAbs() > d;
    }    
};

int main(){
    Complex a(3,4);
    double b = 5.3;

    bool c = a > b;
    cout << c;
}