//Take private members as input from the user and display.

#include<iostream>
using namespace std;

class BirthDate{
    private:
        int month;
        int day;
        int year;

    //Constructor to initialize private data members.
    public:
        BirthDate(){
            month = 0;
            day = 0;
            year = 0;
        }

    //Take input from the user.
    void getData(){
        cout << "Enter Month: ";
        cin >> month;

        cout << "Enter Day: ";
        cin >> day;

        cout << "Enter Year: ";
        cin >> year;
    }

    //Display data.
    void setData(){
        cout << "Your Birth Date is " << day << "/" << month << "/" << year;
    }
};

int main(){

    BirthDate obj;

    obj.getData();
    obj.setData();

    return 0;
}