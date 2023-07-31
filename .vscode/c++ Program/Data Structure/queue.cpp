#include<iostream>
#include<string>
#define SIZE 100
using namespace std;

void enqueue(string [],int &,int &,string);
void display(string [],int,int);
//const int size=100;


int main()
{
    //int size = 100;
	string queue[SIZE];
	string item;
	int rear=0,front=0;
	int choice;
	
	do{
		cout << "***** Menu *****\n\n";
		cout << "Enter 1 for push\n";
		cout << "Enter 2 for display\n";
		cout << "Enter 3 for exit\n";
		
		cout << "\nEnter your choice: ";
		cin >> choice;
		
		switch(choice)
		{
			case 1:
				cout << "\n============================\n";
				cout << "Enter item: ";
				cin >> item;
				cout << "============================\n";
				enqueue(queue,rear,front,item);
				break;
				
			case 2:
				cout << "\n============================";
				cout << "\nQueue is: \n";
				display(queue,rear,front);
				cout << "\n============================\n";
				break;
			case 3:
				cout << "\n============================\n";
				cout << "You are exit! \n";
				cout << "============================\n";
				break;
			default:
				cout << "\n============================\n";
				cout << "Wrong choice!\n";
				cout << "============================\n";
				break;
		}
	}while(choice>=1 && choice<=2);
	return 0;
}

void enqueue(string queue[],int &rear,int &front,string item)
{
	if(rear>=SIZE)
	{
		cout << "Queue is full!";
	}else{
		if(rear==0 && front==0)
		{
			front=1;
		}
		rear=rear+1;
		queue[rear]=item;
	}
}

void display(string queue[],int rear,int front)
{
	cout << "FRONT NI VALUE AA CHE" << front << endl;
	
	for(int i=rear;i>0;i--)
	{
		if(front==rear==1)
		{
			cout << queue[i] << "<--------Front/Rear" << endl;
		}else if(i==front)
		{
			cout << queue[front] << "<------front" << endl;
		}
		else if(i == rear)
		{
			cout << "\n" << queue[rear] << "<-------Rear" << endl;
		}else
		{
			cout << queue[i] << endl;
		}
	}
}

/*void display(string queue[],int rear,int front)
{
	cout << "FRONT NI VALUE AA CHE" << front << endl;
	cout << "\n" << queue[rear] << "<-------Rear" << endl;
	
	for(int i=rear-1;i>=0;i--)
	{
		if(i == front)
		{
			cout << queue[i] << "<--------Front" << endl;
		}
		else
		{
			cout << queue[i] << endl;
		}
	}
}*/