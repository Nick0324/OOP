#include <iostream>
#include <ctime>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;
//Ex 1
void swap(int &a, int &b){
    int aux = a;
    a = b;
    b = aux;
}
// Ex 2
int f(float n, bool isRoundedTo100){
    if(!isRoundedTo100){
	    if(int(n + 1) - n <= n - int(n))
            return int(n + 1);
        return int(n);      
    }  
    else{
        int m = int(n);
        if(m % 100 < 50)
            return m - m % 100;

        return m + 100 - m % 100;    
    }
    return 0;
}
// Ex 3
struct Student{
    string name;
    unsigned int grade;
};

template <typename T>
T Max(T a, T b){
    return a.grade < b.grade ? b : a;
}
//Ex 4
string timeToString(){
    char text[100];
    time_t now = time(NULL);
    struct tm *t = localtime(&now); 
    strftime(text, sizeof(text) - 1, "%d-%m-%Y %H:%M:%S", t);
    return string(text);
}
//Ex 5
int f(int x){
    return sizeof(x);
} 

int f(double x){
    return sizeof(x);
}

int f(Student x){
    return sizeof(x);
}

int f(char *x){
    return strlen(x);
}
//Ex 7
struct nrComplex{
    double a, b;
};

double module(nrComplex nr){
    return sqrt(nr.a * nr.a + nr.b * nr.b);
}

double module(double nr){
    return abs(nr);
}
//Ex 8
template <typename T>
T Max(T a, T b, T c){
    return max({a, b, c});
}
//Ex 9
template <typename T>
T Sum(T a, T b){
    return a + b;
}
//Ex 10
template <typename T>
void Swap(T &a, T &b){
    T aux = a;
    a = b;
    b = aux;
}
//Ex 11
int addition(int a, int b){
    return a + b;
}
int subtraction(int a, int b){
    return a - b;
}
int multiplication(int a, int b){
    return a * b;
}
int division(int a, int b){
    return b != 0 ? a / b : 0;
}            
//Ex 12
struct Person{
    string name;
    int age;
};

struct Cat{
    string name;
    int age;
    Person master;
};
struct Car{
    string producer;
    int licenseNumber, age;
};

template <typename T>
int minAge(T a, T b){
   return a.age < b.age ? a.age : b.age;
}

template <typename T>
bool isEqAge(T a, T b){
   return (a.age == b.age);
}
//Ex 14
double solveEquation(double a, double b){
    try{
        if(a != 0)
            return -b / a;
        else
            throw(a);
    }
    catch(double e){
        printf("You cannot divide by ");
        return a;
    }
    
}

int main(){
    // Ex 1
    // int a = 3, b = 4;
    // swap(a, b);

    // cout << a << " " << b;

    //Ex 2
    // cout << f(6.6, false) << '\n';
    // cout << f(6.3, false) << '\n';
    // cout << f(149, true) << '\n';
    // cout << f(153, true) << '\n';

    //Ex 3
    // Student a,b;
    // a.grade = 5;
    // b.grade = 10;
    // cout << Max(a, b).grade;

    //Ex 4
    // cout << timeToString();

    //Ex 5
    // Student a;
    // cout << f(3) << " " << f(3.5) << " " << f('a') << " " << f(a);

    //Ex 7
    // nrComplex nr;
    // nr.a = 5;
    // nr.b = 4;
    // cout << module(nr) << " " << module(-6.413);

    //Ex 8
    // cout << Max(3, 4, 5) << " " << Max('a', 'b', 'c');

    //Ex 9
    // cout << Sum(2,2) << " " << Sum(2.2, 9.4); // Only works for int, double, float and long

    //Ex 10
    // int a = 4, b = 6;
    // Swap(a, b);
    // cout << a << " " << b << '\n';
    // Student c, d;
    // c.grade = 6;
    // swap(c, d);
    // cout << d.grade; // It also works for struct types

    //Ex 11
    // int a, b;
    // string operation;
    // cout << "Enter first operand: ";
    // cin >> a;
    // cout << "Enter operation: ";
    // cin >> operation;
    // cout << "Enter second operand: ";
    // cin >> b;
    // switch(operation[0]){
    //     case '+':
    //         cout << addition(a, b);
    //         break;
    //     case '-':
    //         cout << subtraction(a, b);
    //         break;
    //     case '*':
    //         cout << multiplication(a, b);
    //         break;
    //     case '/':
    //         cout << division(a, b);
    //         break;
    //     default:
    //         cout << "Enter a valid operation";        
    // }

    //Ex 12
    // Person bob;
    // Cat meow;
    // bob.age = 32;
    // meow.age = 3;
    // cout << minAge(bob, meow); // Doesn't work idk

    //Ex 13
    // Person bob, john, chris;
    // bob.age = 30;
    // john.age = 43;
    // chris.age = 16;

    // vector<Person> people{bob, john, chris};
    // sort(people.begin(), people.end(), 
    // []( const Person& a, const Person&b ){
    // return a.age > b.age;} );

    // for(auto x : people)
    //     cout << x.age << " ";

    //Ex 14
    // cout << solveEquation(0, 4);
}