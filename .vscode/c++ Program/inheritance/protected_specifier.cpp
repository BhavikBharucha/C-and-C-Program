#include<iostream>
using namespace std;

//Public members of the class are accessible outside of the class.
//Private members of the class are accessible within the class.
//Protected members of the class are accessible in inherited class.

class A{
    protected:
        int num;
};

class B: public A{
    public:
        void setNumber(int n){
            num = n;
        }

        void getNumber(){
            cout << num;
        }
};

int main(){
    B obj;

    int n = 5;

    obj.setNumber(n);
    obj.getNumber();
}