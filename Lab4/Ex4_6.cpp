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

class Documents{
    string license;
};

class Car {
    public:
    int age;
    Driver *driver;
    Documents *documents;
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

    Documents *getDocuments(){
        return this->documents;
    }
};