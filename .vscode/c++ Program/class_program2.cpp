//Take department name and employee from user, if user enter two department then merge both the department enployees and display total employee count.

#include<iostream>
using namespace std;

class Department{
    public:
        int totaldepartment;
        string DepartmentName[50] = {};
        int numberOfEmployees[50] = {};
        int totalEmployees=0;
    
    void getDetails(){

        //Take total number of department user want to insert.
        cout << "Enter Total Department you want to insert: ";
        cin >> totaldepartment;

        //Take department name and total number of employee based on totalnumber of department.
        for(int i=0;i<totaldepartment;i++){
            cout << "Enter department " << i << " name: ";
            cin >> DepartmentName[i];

            cout << "Enter number of employees: ";
            cin >> numberOfEmployees[i];

            cout << "------------------------------------";
        }
    }

    void setDetails(){
        for(int i=0;i<totaldepartment;i++){
            totalEmployees = totalEmployees + numberOfEmployees[i];
        }

        cout << "Total Employees: " << totalEmployees;
    }    
};

int main(){
    Department objdept;

    objdept.getDetails();
    objdept.setDetails();

    return 0;
}