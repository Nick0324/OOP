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

};

Complex compare(Complex a, Complex b){
    return a.computeAbs() > b.computeAbs() ? a : b;
}

int main(){
    Complex a(3,4);
    Complex b(4,5);

    compare(a, b).print();
}