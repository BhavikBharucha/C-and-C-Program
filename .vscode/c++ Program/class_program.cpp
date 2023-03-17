//Take scientistname,inventionname and inventionyear from user and display.

#include<iostream>
using namespace std;

class Invention{
    public:
        string scientist_name;
        string invention_name;
        int invention_year;

    void getData(){

        cout << "Enter Scientist Name: ";
        cin >> scientist_name;

        cout << "Enter Invention Name: ";
        cin >> invention_name;

        cout << "Enter Invention Year: ";
        cin >> invention_year;
    }

    void setData(){
        cout << scientist_name << " invented " << invention_name << " in " << invention_year;
    }
};

int main(){
    Invention obj;

    obj.getData();
    obj.setData();

    return 0;
}