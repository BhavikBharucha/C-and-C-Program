#include<iostream>
#include<string>
using namespace std;

class Person{
    public:
        string name = "Bhavik";
        void display(){
            cout << "Profile\n";
        }
};

class Student: public Person{
    public:
        string course = "M.s.c IT";
};

int main(){
    Student obj;

    obj.display();

    cout << "My name is: " << obj.name << ", Course: " << obj.course;
    return 0;
}