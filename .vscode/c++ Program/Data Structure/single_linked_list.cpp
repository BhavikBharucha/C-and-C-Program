#include<iostream>
using namespace std;

struct node{
    int data;
    node *link;
}*ptr,*header,*ptr2,*temp;

//For creating a node
node *createnode(int n){
    ptr = new node;

    ptr->data = n;
    ptr->link = NULL;

    return ptr;
}

//For insert at begining

void insertbeg(int n){
    ptr = new node;

    if(ptr == NULL){
        cout << "\nMemory is overflow!\n";
    }else{
        ptr->data = n;
        ptr->link = header;
        header=ptr;
    }
}

//For insert at the end
void insertend(int n){
    ptr = new node;
    if(ptr == NULL){
        cout << "\nMemory is overflow!\n";
    }else{
        ptr->data = n;
        ptr->link = NULL;

        ptr2 = header;
        while(ptr2->link!=NULL){
            ptr2 = ptr2->link;
        }
        ptr2->link = ptr;
    }
}

//For insert at any position
void insertanypos(int n,int datapos){
    ptr = new node;
    if(ptr == NULL){
        cout << "\nMemory Overflow!!\n";
    }else{
        int pos = 1;
        ptr2 = header;
        if(datapos == 1){
            insertbeg(n);
            pos++;
        }

        while(ptr2->link!=NULL && pos != datapos){
            ptr2 = ptr2->link;
            pos++;
        }

        if(pos == datapos){
            ptr->data = ptr2->data;
            ptr->link = ptr2->link;
            ptr2->data = n;
            ptr2->link = ptr;
        }else{
            cout << "\nPosition is not available!!\n";
        }
    }
}

//For delete at begining
void deletebeg(){
    if(header->link == NULL){
        cout <<  "\nList is empty!!\n";
    }else{
        temp = new node;
        temp = header;
        header = header->link;
        delete temp;
    }
}

//For delete at end
void deleteend(){
    if(header->link == NULL){
        cout <<  "\nList is empty!!\n";
    }else{
        temp = new node;
        ptr2 = header;

        while(ptr2->link->link != NULL){
            ptr2 = ptr2->link;
        }

        temp = ptr2->link->link;
        ptr2->link = NULL;
        delete temp;
    }
}

//For delete at any position
void deleteany(int delpos){
    if(header->link == NULL){
        cout <<  "\nList is empty!!\n";
    }else{
        temp = new node;
        ptr2 = header;
        int pos = 1;
        if(pos == 1){
            deletebeg();
        }else{
            while(ptr2->link != NULL && pos != delpos){
                ptr2 = ptr2->link;
                pos++;
            }

            if(pos == delpos - 1){
                temp = ptr2->link;
                ptr2->link = ptr2->link->link;
                delete temp;
            }else{
                cout << "\nElement not found!!\n";
            }
        }
    }
}

//For display
void display(){
    ptr2 = header;
    int counter = 0;

    while(ptr2 != NULL){
        cout << ptr2->data;
        if(ptr2->link != NULL){
            cout << "--->";
        }

        ptr2 = ptr2->link;
        counter++;
    }
    cout << "\nTotal number of nodes: " << counter << endl;
}

int main(){
    int choice,data,pos;

    do{
        cout << "\n1. Insert at begining";
        cout << "\n2. Insert at end";
        cout <<  "\n3. Insert at any position";
        cout << "\n4. Delete at begining";
        cout << "\n5. Delete at end";
        cout << "\n6. Delete at any position";
        cout << "\n7. Display";
        cout << "\n8. Exit";

        cout << "\n\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "\nEnter data: ";
                cin >> data;
                
                insertbeg(data);
                break;

            case 2:
                cout << "\nEnter data: ";
                cin >> data;

                insertend(data);
                break;

            case 3:
                cout << "\nEnter data: ";
                cin >> data;

                cout << "\nEnter Position: ";
                cin >> pos;

                insertanypos(data,pos);
                break;

            case 4:
                deletebeg();
                break;

            case 5:
                deleteend();
                break;

            case 6:

                int delpos;

                cout << "\nEnter position: ";
                cin >> delpos;

                deleteany(delpos);
                break;

            case 7:
                display();
                break;
            
            case 8:
                cout << "Exit!!";
                break;

            default:
                cout << "Wrong choice!!";
                break;
        }
    }while(choice>=1 && choice<8);

    return 0;
}