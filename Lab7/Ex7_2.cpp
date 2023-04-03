#include <iostream>
#include <vector>

using namespace std;

class Group{

    class Student{
    int grade;
    string name;

    public:
    Student(string name, int grade){
        this->name = name;
        this->grade = grade;
    }

    string getName(){
        return this->name;
    }    
};

    vector<Student> students;

    public:
    void addStudent(string name, int grade){
        students.push_back(Student(name, grade));
    }

    void displayStudents(){
        for(auto i : students){
            cout << i.getName() << " ";
        }
    cout << endl;
    }
};

int main(){
    Group group;
    group.addStudent("John", 7);
    group.addStudent("Bob", 4);
    group.addStudent("Albert", 9);

    group.displayStudents();
}