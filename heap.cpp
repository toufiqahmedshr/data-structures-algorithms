#include<iostream>
using namespace std;

//Defining a BST node
struct node
{
    int data;
    node *left,*right;
};

node * root = NULL;

//declaration of all functions used in this code
node* insertData(int);
int deleteData(int);
node *searchData(int);
void visit(node*);

int main()
{
    // populate BST with some values
    int elem,i,num;

    int a[8]={66,32,89,23,45,78,98,67};
    for(i=0; i<8; i++)
    {
        //cout<<"Element "<<i+1<<": ";
        //cin>>elem;
        if(insertData(a[i])== NULL)
            cout<<"Duplicated!! Insertion unsuccessful."<<endl<<endl;
    }

    cout<< "in-order: ";
    visit(root);

    int choice;
    while(true)
    {
        cout<<"\n1) search data\n2) add data\n3) delete data\n4) show BST\n0) Exit\nEnter option: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            //use searchData function here
            cout<<"Which element to search? ";
            cin>>elem;
            if(searchData(elem)==NULL)
                cout<<"Not found!\n";
            else
                cout<<"found!\n";
            break;
        case 2:
            //use insertData function here
            cout<<"Which element to insert? ";
            cin>>elem;
            if(insertData(elem))
                cout<<"Insertion successful."<<endl<<endl;
            else
                cout<<"Duplicated!! Insertion unsuccessful."<<endl<<endl;
            break;
        case 3:
            //use deleteData here
            cout<<"Which element to delete? ";
            cin>>elem;
            //call deleteData here
            if(deleteData(num))
                cout<<"Deletion successful."<<endl<<endl;
            else
                cout<<"Deletion unsuccessful."<<endl<<endl;
            break;
        case 4:
            cout<< "in-order: ";
            visit(root);
            break;
        case 0:
            return 0;
        }
    }
    return 0;
}

//Defining a function to add a node in BST
node* insertData(int num)
{
    //create node
    node *nn=new node;
    nn->data=num;
    nn->left= nn->right = NULL;

    //traverse to the correct parent
    node *curr=root,*parent=NULL;
    while(curr!=NULL)
    {
        if(curr->data == num)
            return NULL;
        parent = curr;
        if(curr->data < num)
            curr=curr->right;
        else
            curr=curr->left;

    }

    // add the new node to parent
    if(root == NULL)
        root = nn;
    else if(parent->data < num)
        parent->right=nn;
    else
        parent->left=nn;

    return nn;
}

void visit(node *parent)//in-order traversal
{
    if(root == NULL)
        cout<<"Tree does not exist!\n\n";
    if(parent!=NULL)
    {
        visit(parent->left);
        cout<<parent->data<< " ";
        visit(parent->right);
    }
}

// Return the address of node where num is found
node *searchData(int num)
{
    if(root == NULL)
        cout<<"Tree does not exist!\n\n";

    node *curr = root;

    while(curr !=NULL)
    {
        if(curr ->data == num)
        {
            return curr;
        }
        else if(curr ->data > num)
        {
            curr = curr -> left;
        }
        else
        {
            curr = curr -> right;
        }

    }

    return NULL;
}


int deleteData(int num)
{
    if(root == NULL)
        cout<<"Tree does not exist!\n\n";
    
    node *curr = root;
    node *parent = NULL;
    while(curr !=NULL)
    {
        if(curr ->data == num)
        {
            break;
        }
        else if(curr ->data > num)
        {
            parent = curr;
            curr = curr -> left;
        }
        else
        {
            parent = curr;
            curr = curr -> right;
        }

    }
    if(curr == NULL)
    {
        return 0;
    }

    if(curr -> left == NULL && curr -> right == NULL)
    {
        if(parent == NULL)
        {
            root = NULL;
        }
        else if(parent -> left == curr)
        {
            parent -> left = NULL;
        }
        else
        {
            parent -> right = NULL;
        }
        delete curr;
    }
    else if(curr -> left == NULL || curr -> right == NULL)
    {
        node *child;
        if(curr -> left == NULL)
        {
            child = curr -> right;
        }
        else
        {
            child = curr -> left;
        }
        if(parent == NULL)
        {
            root = child;
        }
        else if(parent -> left == curr)
        {
            parent -> left = child;
        }
        else
        {
            parent -> right = child;
        }
        delete curr;
    }
    else
    {
        node *succ = curr -> right;
        node *succParent = curr;
        while(succ -> left != NULL)
        {
            succParent = succ;
            succ = succ -> left;
        }
        curr -> data = succ -> data;
        if(succParent -> left == succ)
        {
            succParent -> left = succ -> right;
        }
        else
        {
            succParent -> right = succ -> right;
        }
        delete succ;
    }

    return 0;

}