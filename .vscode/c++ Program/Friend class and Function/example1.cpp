#include<iostream>
using namespace std;

class clsA{
    int i = 3;

    friend class clsB;
};

class clsB{
    public:
        void display(clsA &obj){
            cout << "Value of i is: " << obj.i;
        }
};

int main(){
    clsA obja;
    clsB objb;

    objb.display(obja);

    return 0;
}