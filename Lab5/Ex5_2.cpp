#include <iostream>

using namespace std;

class Form {
    protected:
    string name;
    public:

    Form(){
        cout << "Form created" << '\n';
    }

    string getName(){
        return this->name;
    }
    void setName(string name){
        this->name = name;
    }

    ~Form(){
        cout << "Form destroyed" << '\n';
    }
};
class Rectangle:public Form {
    protected:
    int width;
    int height;
    public:

    Rectangle(){
        cout << "Rectangle created" << '\n';
    }

    void setWidth(int width){
        this->width = width;
    }
    int getWidth(){
        return this->width;
    }

    ~Rectangle(){
        cout << "Rectangle destroyed" << '\n';
    }
};
int main()
{
    Form f;
    Rectangle r;

    return 0;
}