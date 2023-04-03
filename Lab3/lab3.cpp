#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//Ex 1
class Rectangle{
    int length, width;

    public:
    Rectangle();
    Rectangle(int length, int width){
        this->length = length;
        this->width = width;
    }
    
    int perimeter(){
        return 2 * this->length + 2 * this->width;
    }
    int area(){
        return this->length * this->width;
    }

};

int maxArea(Rectangle a, Rectangle b){
    return a.area() < b.area() ? b.area() : a.area();
}

int maxPerimeter(Rectangle a, Rectangle b){
    return a.perimeter() < b.perimeter() ? b.perimeter() : a.perimeter();
}
//Ex 2
class Student{
    public:     // Variabilele sunt publice pentru ca am uitat de getter si mi-am amintit prea tarziu
    string name;
    int grade;

    Student(string name, int grade){
        this->grade = grade;
        this->name = name;
    }

    
};

class StudentGroup{
    vector<Student*> studentList;

    public:
    void addStudent(Student* studentToAdd){
        this->studentList.push_back(studentToAdd);
    }

    void sortStudents(){
        sort(this->studentList.begin(), this->studentList.end(), 
            [](Student* a, Student* b)
        { 
            if(a->grade == b->grade)
                return a->name > b->name;
        return a->grade > b->grade; 
        });    
    }

    void displayStudents(){
        for (auto x : this->studentList)
            cout << x->name << " ";
        cout << '\n';    
    }

    //Ex 3
    bool isStudent(string name){
        for(auto x : this->studentList)
            if(x->name == name)
                return true;
        return false;        
    }

    //Ex 4
    void findHighestGrade(){
        int highestGrade = 0;
        for(auto x : this->studentList)
            if(x->grade > highestGrade)
                highestGrade = x->grade;

        for(auto x : this->studentList)
            if(x->grade == highestGrade)
                cout << "Name:" << x->name << " Grade:" << x->grade << '\n';
    }
};
//Ex 5
class ComplexNumber{
    int realPart, imaginaryPart;

    public:
    ComplexNumber();
    ComplexNumber(int a, int b){
        this->realPart = a;
        this->imaginaryPart = b;
    }

    int getRealPart(){
        return this->realPart;
    }
    int getImaginaryPart(){
        return this->imaginaryPart;
    }

    void setRealPart(int a){
        this->realPart = a;
    }
    void setImaginaryPart(int a){
        this->imaginaryPart = a;
    }
};

// ComplexNumber *complexSum(ComplexNumber *a, ComplexNumber *b){
//     ComplexNumber *temp = new ComplexNumber();
//     int tempRealPart = a->getRealPart() + b->getRealPart();
//     int tempImaginaryPart = a->getImaginaryPart() + b->getImaginaryPart();

//     temp->setRealPart(tempRealPart);
//     temp->setImaginaryPart(tempImaginaryPart);

//     return temp;
// }

int main(){
    // Ex 1
    // Rectangle a(3,4), b(4,5);
    // cout << maxArea(a, b) << " " << maxPerimeter(a, b);

    //Ex 2
    // Student *a = new Student("aaa", 6);
    // Student *b = new Student("bbb", 3);
    // Student *c = new Student("ccc", 5);
    // Student *d = new Student("ddd", 6);

    // StudentGroup *students = new StudentGroup;
    // students->addStudent(a);
    // students->addStudent(b);
    // students->addStudent(c);
    // students->addStudent(d);

    // students->displayStudents();

    // students->sortStudents();
    
    // students->displayStudents();

    //Ex 3
    // cout << students->isStudent("aaa") << '\n';
    // cout << students->isStudent("eee") << '\n';

    //Ex 4
    // students->findHighestGrade();

    //Ex 5
    // ComplexNumber *a = new ComplexNumber(3, 4);
    // ComplexNumber *b = new ComplexNumber(2, 7);

    // ComplexNumber *c = new ComplexNumber();
    // c = complexSum(a, b);

    // int d = c->getRealPart();
    // cout << d;
}