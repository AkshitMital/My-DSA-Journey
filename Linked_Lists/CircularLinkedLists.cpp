#include<iostream>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;

    //constructor
    Node(int data){
        this -> val = data;
        this -> next = NULL;
    }

    //destructor
    ~Node(){
        int value = this -> val;
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout<<"Memory is free for node with data: "<<value<<endl;
    }
};

void InsertNode( Node* &tail, int element, int data)
{
    //empty list
    if(tail == NULL){
        Node* temp = new Node(data);
        tail = temp;
        temp -> next = temp;
    }
    else{
        //assuming that the elemnt is present in the list
        Node* curr = tail;

        while(curr -> val != element){
            curr = curr -> next;
        }

        //element found -> curr is representing the element
        Node* temp = new Node(data);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}

void DeleteNode(Node* &tail, int value)
{
    //empty list
    if(tail == NULL){
        cout<<"List is empty, Please check again"<<endl;
        return ;
    }else{
        //non empty list
        //assuming yhat the value is present in the list
        Node* previous = tail;
        Node* current = previous -> next;
        while(current -> val != value){
            previous = current;
            current = current -> next;
        }
        previous -> next = current -> next;
        if(current == previous){
            tail = NULL;
        }
        else if(tail == current){
            tail = previous;
        }
        current -> next = NULL;
        delete current;
    }
}

void printNode(Node* &tail){
    Node* temp = tail;
    if(tail == NULL){
        cout<<"List is empty"<<endl;
        return;
    }

    do{
        cout<< tail -> val<<" ";
        tail = tail -> next;
    }while(tail!=temp);
    cout<<endl;
}

int main()
{
    // Node* node1 = new Node(30);
    // Node* tail = node1;
    // printNode(tail);

    Node* tail = NULL;
    InsertNode(tail,5,10);
    // printNode(tail);
    // InsertNode(tail,10,20);
    // printNode(tail);
    // InsertNode(tail,20,40);
    // printNode(tail);
    // InsertNode(tail,20,30);
    // printNode(tail);
    // InsertNode(tail,40,60);
    // printNode(tail);
    // InsertNode(tail,40,50);
    // printNode(tail);

    DeleteNode(tail,10);
    printNode(tail);

    return 0;
}