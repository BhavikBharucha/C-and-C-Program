#include<iostream>
using namespace std;

class Person{
    char name[100];
    int age;

    friend class LicenseEligibility;
};

class LicenseEligibility{
    public:
        void setData(Person &p){
            cout << "Enter Name: ";
            fflush(stdin);
            cin.get(p.name,100);

            cout << "Enter Age: ";
            cin >> p.age;
        }

        void getData(Person &p){
            cout << "---------------------------------" << endl;
            cout << p.name << " is " << p.age << " year old." << endl;

            if(p.age > 18){
                cout << "Eligible for license." << endl;
                cout << "---------------------------------" << endl;
            }else{
                cout << "Not Eligible for license!" << endl;
                cout << "---------------------------------" << endl;
            }
        }
};

int main(){
    Person p;
    LicenseEligibility l;

    l.setData(p);
    l.getData(p);
}