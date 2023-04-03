#include <iostream>

using namespace std;

class Form {
    protected:
    string name;
    public:

    string getName(){
        return this->name;
    }
    void setName(string name){
        this->name = name;
    }

    int computeArea(){
        cout << "Can't compute area" << '\n';
        return 0;
    }

};
class Rectangle:public Form {
    protected:
    int width;
    int height;
    public:


    void setWidth(int width){
        this->width = width;
    }
    int getWidth(){
        return this->width;
    }
    void setHeight(int height){
        this->height = height;
    }
    int computeArea(){
        return this->width * this->height;
    }
};
int main()
{
    Form *f = new Form();
    f->computeArea();

    Rectangle *r = new Rectangle();
    r->setWidth(23);
    r->setHeight(13);
    cout << r->computeArea();
    return 0;
}