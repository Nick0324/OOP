#include <iostream>
#include <vector>

using namespace std;

template <class T>
class ObjGroup {
    vector<T> objectList;
    public:
    void addElement(T element) {
        objectList.push_back(element);
}
    double computeAvg() {
    double avg = 0;
    for (T it : objectList) {
    avg += it.getAge();
    }
    return avg / objectList.size();
}
};

class Person{
    int age;

    public:
    Person(int age){
        this->age = age;
    }

    int getAge(){
        return this->age;
    }
};

class Car{
    int age;

    public:
    Car(int age){
        this->age = age;
    }

    int getAge(){
        return this->age;
    }
};

int main(){
    ObjGroup<Person> PersonGroup;
    PersonGroup.addElement(Person(17));
    PersonGroup.addElement(Person(32));

    cout << "Average age of people: " << PersonGroup.computeAvg() << endl;

    ObjGroup<Car> CarGroup;
    CarGroup.addElement(Car(20));
    CarGroup.addElement(Car(5));

    cout << "Average age of cars: " << CarGroup.computeAvg() << endl;
}