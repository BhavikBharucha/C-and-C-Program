#include<iostream>
using namespace std;

class Person{
    private:
        int age;

    public:
        void display(){
            cout << "--------------------" << endl;
            cout << age << " year old." << endl;
            cout << "--------------------" << endl;
        }

    friend void setValue(Person &p, int age);
};

void setValue(Person &p, int age){    
    p.age = age;
}

int main(){
    Person p;

    int age;

    cout << "Enter age: ";
    cin >> age;

    setValue(p,age);
    p.display();

    return 0;
}