#include<iostream>
using namespace std;

class A{
    public:
        void myFuncA(){
            cout << "Class A Function Called!!\n";
        }
};

class B: public A{  //Child Class
    public:
        void myFuncB(){
            cout << "Class B Function Called!!\n";
        }
};

class C: public B{ //Sub-Child Class
    public:
        void myFuncC(){
            cout << "Class C Function Called!!\n";
        }
};

int main(){
    C objc;

    objc.myFuncA();
    objc.myFuncB();
    objc.myFuncC();

    return 0;
}