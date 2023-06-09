#include<iostream>
using namespace std;

class Person{
    int id;
    char name[100];

    public:
        void setData(){
            cout << "Enter id: ";
            cin >> id;

            fflush(stdin);
            cout << "Enter name: ";
            cin.get(name,100);
        }

        void getData(){
            cout << "ID: " << id << endl << "Name: " << name << endl;
        }
};

class Student: private Person{
    char course[100];
    int fees;

    public:
        void setStudentData(){
            setData();

            cout << "Enter Course name: ";
            fflush(stdin);
            cin.get(course,100);

            cout << "Enter fees: ";
            cin >> fees;
        }

        void DisplayData(){
            cout << "------------------------------" << endl;
            getData();
            cout << "Course: " << course << endl << "Fees: " << fees << endl;
            cout << "------------------------------" << endl;
        }
};

class Employee: private Person{
    char email[100];
    double salary;

    public:
        void setEmployeeData(){
            cout << "Enter Employee email: ";
            fflush(stdin);
            cin.get(email,100);

            cout << "Enter salary: ";
            cin >> salary;
        }

        void DisplayData(){
            cout << "------------------------------" << endl;
            getData();
            cout << "Email: " << email << endl << "Salary: " << salary << endl;
            cout << "------------------------------";
        }
};

int main(){
    Student s;

    s.setStudentData();
    s.DisplayData();

    Employee e;
    e.setEmployeeData();
    e.DisplayData();
}