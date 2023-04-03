#include <iostream>
#include <vector>
using namespace std;

class Student{
    string name;
    int grade;

    public:
    Student(string name, int grade){
        this->name = name;
        this->grade = grade;
    }

    int getGrade(){
        return this->grade;
    }
};

class StudentList{
    vector<Student*> students;

    public:
    void addStudent(Student *a){
        this->students.push_back(a);
    }

    Student *getMaxGrade(){
        int max = 0;
        for(auto x : students){
            if(x->getGrade() > max)
                max = x->getGrade();
        }
        for(auto x : this->students){
            if(x->getGrade() == max)
                return x;
        }
        return nullptr;
    }

    Student *getFirstPassingGrade(){
        for(auto x : this->students){
            if(x->getGrade() == 5)
                return x;
        }
        return nullptr;
    }
};

int main(){

    Student *a = new Student("john", 7);
    Student *b = new Student("timmy", 4);
    Student *c = new Student("johnny", 5);

    StudentList *students = new StudentList();
    students->addStudent(a);
    students->addStudent(b);
    students->addStudent(c);

    cout << students->getFirstPassingGrade()->getGrade();
}