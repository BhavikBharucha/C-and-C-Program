#include<iostream>
using namespace std;

class A{
    public:
        void myFuncA(){
            cout << "Class A Function Called!!\n";
        }
};

class B{
    public:
        void myFuncB(){
            cout << "Class B Function Called!!\n";
        }
};

class C: public A,public B{
    public:
        void myFuncC(){
            cout << "Class C Function Called!!\n";
        }
};

int main(){
    C obj;

    obj.myFuncA();
    obj.myFuncB();
    obj.myFuncC();

    return 0;
}