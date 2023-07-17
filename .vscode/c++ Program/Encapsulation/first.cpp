/*The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users. To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class). If you want others to read or modify the value of a private member, you can provide public get and set methods.*/

#include<iostream>
using namespace std;

class Student{
    private:
        int enrollmentno;

    public:
        void setData(int enrl){
            enrollmentno = enrl;
        }

        void getData(){
            cout << enrollmentno;
        }
};

int main(){

    Student obj;

    int enrollmentno;

    cout << "Enter EnrollmentNo: ";
    cin >> enrollmentno;

    obj.setData(enrollmentno);
    obj.getData();

    return 0;
}