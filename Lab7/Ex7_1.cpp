#include <iostream>
#include <vector>

using namespace std;

class Wheel{
    int diameter;

    public:
    Wheel();
};

class HummerWheel : public Wheel{

};

class CarriageWheel : public Wheel{

};

class Vehicle{
    void changeWheel();
};

class Hummer : public Vehicle{
    vector<HummerWheel> wheels;

    Hummer(){
        HummerWheel a, b, c, d;
        wheels.push_back(a);
        wheels.push_back(b);
        wheels.push_back(c);
        wheels.push_back(d);
    }

    void changeWheel(HummerWheel wheel, int position){
        wheels[position] = wheel;
    }
    void removeWheel(int position){
        wheels.erase(wheels.begin() + position);
    }    
};

class Carriage : public Vehicle{
    vector<CarriageWheel> wheels;

    Carriage(){
        CarriageWheel a, b, c, d;
        wheels.push_back(a);
        wheels.push_back(b);
        wheels.push_back(c);
        wheels.push_back(d);
    }

    void changeWheel(CarriageWheel wheel, int position){
        wheels[position] = wheel;
    } 
    void removeWheel(int position){
        wheels.erase(wheels.begin() + position);
    }         
};


int main(){
    
}