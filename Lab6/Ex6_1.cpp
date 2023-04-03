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

    double operator ~(){
        double res = sqrt(this->real * this->real + this->img * this->img);
        return res;
    }

    Complex operator ^(const int n){
        Complex *temp = new Complex(0,0);
        temp->real = this->real * this->real - this->img * this->img;
        temp->img = 2 * (this->real * this->img);

        return *temp;
    }

    Complex operator +(Complex const &c){

        Complex *res = new Complex(0,0);
        res->real = real + c.real;
        res->img = img + c.img;

        return *res;
    }

    bool operator <(Complex const &c){
        return sqrt(this->real * this->real + this->img * this->img) < sqrt(c.real * c.real + c.img * c.img);
    }
};

int main(){
    Complex nr1(3,4);
    Complex nr2(5,6);

    bool a = nr1 < nr2; // Ex 3

    cout << a << endl;

    cout << ~(nr1) << " " << ~(nr2) << "\n";

    nr1 = nr1 ^ 2;
    nr1.print();

    Complex nr3(0,0);

    nr3 = nr1 + nr2; // Ex 2

    nr3.print();

}