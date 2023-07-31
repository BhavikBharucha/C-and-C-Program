#include<iostream>
using namespace std;
int stack[100],n=100,top=-1;

//For push
void push(int item)
{
    if(top>=n-1)
    {
        cout << "\nStack is overflow!!\n";
    }else{
        top++;
        stack[top] = item;
    }
}

//For pop
void pop()
{
    if(top<=-1)
    {
        cout << "\nStack is empty!!\n";
    }else{
        cout << "\nPop item is " << stack[top];
        top--;
    }
}

//For display
void display()
{
    cout << stack[top] << "<--Top" << endl;
    for(int i=top-1;i>=0;i--)
    {
        cout << stack[i] << endl;
    }
}

int main()
{

    int choice,item;

    do{
        cout << "\n1. Push";
        cout << "\n2. Pop";
        cout << "\n3. Display";
        cout << "\n4. Exit";

        cout << "\n\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "\nEnter item to insert into stack: ";
                cin >> item;

                if(item!=0)
                {
                    push(item);
                    
                    cout << "\nStack is: \n";
                    display();
                }
                break;

            case 2:
                pop();
                break;

            case 3:
                cout << "\nStack is:\n";
                display();
                break;
            
            case 4:
                cout << "\nExit";
                break;

            default:
                cout << "\nWrong choice";
                break;
        }
    }while(choice>=1 && choice<4);

    return 0;
}