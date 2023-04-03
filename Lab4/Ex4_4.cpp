#include <iostream>
#include <string>

using namespace std;

template <typename T>
void Swap(T &a, T &b){
    T aux = a;
    a = b;
    b = aux;
}

class Driver {
    string name;

    public:

    Driver(string name){
        this->name = name;
    }
    Driver();
    string getName() {
        return this->name;
    }
    void setName(string name) {
        this->name = name;
    }
};

class Car {
    public:
    int age;
    Driver *driver;
    Car(int age, Driver *driver) {
        this->age = age;
        this->driver = driver;
    }
    int getAge() {
        return this->age;
    }
    Driver *getDriver() {
        return this->driver;
    }

    void swapDrivers(Car *a){
        Swap(a->driver, this->driver);
    }
};



int main() {
    Driver *a = new Driver("john");
    Driver *b = new Driver("bob"); 

    Car *c = new Car(3, a);
    Car *d = new Car(15, b);

    cout << c->getDriver()->getName() << " " << d->getDriver()->getName() << '\n';

    c->swapDrivers(d);

    cout << c->getDriver()->getName() << " " << d->getDriver()->getName() << '\n';
}