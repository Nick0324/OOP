#include <iostream>
#include <string>
using namespace std;
class Shape
{
public:
    virtual void draw() = 0; // we define the general behavior
};
class Circle : public Shape
{
public:
    void draw() { cout << "circle\n"; } // we specify the behavior for this shape
};
class Triangle : public Shape
{
public:
    void draw() { cout << "triangle\n"; } // we specify the behavior for this shape
};
class Drawing
{

    Shape *pShape;

public:
    Drawing(Shape *pShape){
        this->pShape = pShape;
    }

    void drawShape() // we draw the Shape. Any extension of Shape with draw() implemented.
    // An instance of Shape is injected in the drawShape method

    {
        pShape->draw();
    }
};

int main()
{
    Drawing *d = new Drawing(new Triangle());
    d->drawShape();
    Drawing e(new Circle());
    e.drawShape();
    // Drawing f(new Circle());
    // Triangle t1;
    // Circle c1;
    // f.drawShape();
    // f.drawShape();
}