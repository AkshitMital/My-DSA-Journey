#include<iostream>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;
    Node* prev;

    //constructor
    Node(int data){
        this -> val = data;
        this -> next = NULL;
        this -> prev = NULL;
    }

    //destructor
    ~Node(){
        int value = this -> val;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory is free for node with data: "<<value<<endl;
    }
};

void InsertatHead(Node* &head,Node* &tail , int d)
{
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }else{
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }
}

void InsertatTail(Node* &tail, Node* &head , int d)
{
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }else{
        Node* temp = new Node(d);
        temp -> prev = tail;
        tail -> next = temp;
        tail = temp;
    }
}

void InsertatPosition(Node* &head , Node* &tail, int position, int d)
{
    //inserting object at position 1
    if(position==1){
        InsertatHead(head,tail,d);
        return;
    }

    Node* temp =head;
    int cnt=1;

    while(cnt<position-1){
        temp = temp -> next;
        cnt++;
    }

    //inserting object at last position
    if(temp -> next == NULL){
        InsertatTail(tail,head,d);
        return;
    }

    //create new node for d
    Node* NodetoInsert = new Node(d);
    NodetoInsert -> next = temp -> next;
    temp -> next -> prev = NodetoInsert;
    temp -> next = NodetoInsert;
    NodetoInsert -> prev = temp;
}

void deleteNode(Node* &head, int position)
{
    if(position==1){
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }else{
        Node* current = head;
        Node* previous = NULL;

        int cnt = 1;
        while(cnt<position){
            previous = current;
            current = current -> next;
            cnt++;
        }

        current -> prev = NULL;
        previous -> next = current -> next;
        current -> next = NULL;
        delete current;
    }
}

void printHead(Node* &head)
{
    Node* temp = head;
    cout<<"NULL <-> ";
    while(temp!=NULL){
        cout<<temp -> val<<" <-> ";
        temp = temp -> next;
    }cout<<"NULL"<<endl;
}

int getLength(Node* &head)
{
    int len=0;
    Node* temp = head;
    while(temp!=NULL){
        len++;
        temp = temp -> next;
    }
    return len;
}


int main()
{
    Node* node1 = new Node(30);
    // Node* head = NULL;
    // Node* tail = NULL;
    Node* head = node1;
    Node* tail = node1;
    printHead(head);
    //cout<<getLength(head)<<endl;
    InsertatHead(head,tail,10);
    printHead(head);
    InsertatTail(tail,head,50);
    printHead(head);
    InsertatPosition(head,tail,2,20);
    printHead(head);
    InsertatPosition(head,tail,4,40);
    printHead(head);
    deleteNode(head, 1);
    printHead(head);
    deleteNode(head, 3);
    printHead(head);

    return 0;
}