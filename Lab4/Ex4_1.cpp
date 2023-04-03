#include <iostream>
#include <vector>

using namespace std;

class Person{
    int age;
    string name;

    public:
    Person(string name, int age){
        this->name = name;
        this->age = age;
    }

    string getName(){
        return this->name;
    }
};

class GroupOfFriends{
    string groupName;
    vector<Person*> friends;

    public:
    
    void addFriend(Person *a){
        this->friends.push_back(a);
    }

    void removeFriend(Person *a){
        for(int i = 0 ; i < friends.size(); i++){
            if(this->friends[i] == a)
                this->friends.erase(this->friends.begin() + i);
        }   
    }

    void displayFriends(){
        for(auto x : this->friends){
            cout << x->getName() << " ";
        }
        cout << '\n';
    }
};

int main(){
    GroupOfFriends *friends = new GroupOfFriends();
    Person *a = new Person("bob", 32);
    Person *b = new Person("rob", 43);

    friends->addFriend(a);
    friends->addFriend(b);

    friends->displayFriends();

    friends->removeFriend(b);

    friends->displayFriends();
}