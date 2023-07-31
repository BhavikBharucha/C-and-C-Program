#include <iostream>
using namespace std;

struct tree
{
    int data;
    tree *left;
    tree *right;
} *ptr;

// For create node
tree *createnode(int n)
{
    ptr = new tree;
    ptr->data = n;
    ptr->left = NULL;
    ptr->right = NULL;

    return ptr;
}

// For preorder
void preorder(tree *root)
{
    if (root != NULL)
    {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

// For inorder
void inorder(tree *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

// For postorder
void postorder(tree *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

// For insert node
tree *insertnode(tree *root, int val)
{
    if (root == NULL)
    {
        return createnode(val);
    }

    if (root->data > val)
    {
        root->left = insertnode(root->left, val);
    }
    else
    {
        root->right = insertnode(root->right, val);
    }
    return root;
}

// For searching
tree *searchnode(tree *root, int val)
{
    if (root == NULL || root->data == val)
    {
        return root;
    }

    if (root->data > val)
    {
        return searchnode(root->left, val);
    }
    else
    {
        return searchnode(root->right, val);
    }

    return root;
}

int main()
{
    int choice, value, r, key;
    tree *root=NULL;

    do
    {
        cout << "\n1. Create node";
        cout << "\n2. Insert node";
        cout << "\n3. Preorder Traversal(Display)";
        cout << "\n4. Inorder Traversal(Display)";
        cout << "\n5. Postorder Traversal(Display)";
        cout << "\n6. Search node";
        cout << "\n7. Exit";

        cout << "\n\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                if(root == NULL)
                {
                    cout << "\nEnter root value: ";
                    cin >> r;

                    root = insertnode(root,r);
                }else{
                    cout << "\nRoot is already created!!";
                }
                break;

            case 2:
                cout << "Enter value you want to insert: ";
                cin >> value;

                insertnode(root,value);
                break;

            case 3:
                preorder(root);
                break;

            case 4:
                inorder(root);
                break;

            case 5:
                postorder(root);
                break;

            case 6:
                cout << "Enter key value you want to search: ";
                cin >> key;

                if(searchnode(root,key))
                {
                    cout << "The element " << key << " is found.\n";
                }else{
                    cout << "The element " << key << " is not found.\n";
                }
                break;

            case 7:
                cout << "\nExit\n";
                break;

            default:
                cout << "\nWrong Choice\n";
                break;
        }
    } while (choice >= 1 && choice < 7);
}