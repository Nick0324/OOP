#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Shape
{
public:
    virtual void draw() = 0; // we define the general behavior
    virtual double getArea() = 0;
};
class Circle : public Shape
{
    int radius;
public:
    Circle(int radius){
        this->radius = radius;
    }
    void draw() { cout << "circle\n"; } // we specify the behavior for this shape

    double getArea(){
        return this->radius * this->radius * 3.14;
    }
};
class Triangle : public Shape
{
    int base, height;
public:
    Triangle(int base, int height){
        this->base = base;
        this->height = height;
    }
    void draw() { cout << "triangle\n"; } // we specify the behavior for this shape

    double getArea(){
        return this->base * this->height / 2;
    }
};

class Rectangle : public Shape
{
    int length, width;
public:
    Rectangle(int length, int width){
        this->length = length;
        this->width = width;
    }
    void draw() { cout << "rectangle\n"; } // we specify the behavior for this shape

    double getArea(){
        return this->length * this->width;
    }
};

class Drawing
{

public:
    void drawShape(Shape *pShape) // we draw the Shape. Any extension of Shape with draw() implemented.
    // An instance of Shape is injected in the drawShape method

    {
        pShape->draw();
    }
    /* Doesn't work. Why ? Try to use this code
    void drawShape(Shape pShape)
    {
    pShape->draw();
    }
    */
};
int main()
{
    Rectangle *rect = new Rectangle(2, 3);
    Triangle *tri = new Triangle(5, 13);
    Circle *circ = new Circle(34);

    cout << "Area of rectangle: " << rect->getArea() << endl;
    cout << "Area of triangle: " << tri->getArea() << endl;
    cout << "Area of circle: " << circ->getArea() << endl;

    vector<Shape*> v;

    v.push_back(rect);
    v.push_back(tri);
    v.push_back(circ);

    double sum = 0;
    for(auto &i : v){
        sum += i->getArea();
    }
    cout << sum;
}