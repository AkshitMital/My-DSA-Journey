#include<iostream>
#include<map>
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
        //memory free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for node with data: "<<value<<endl;
    }
};

void InsertatHead(Node* &head, int d)
{
    //create new node
    Node* new_node = new Node(d);
    new_node -> next = head;
    head = new_node;
}

void InsertatTail(Node* &tail, int d)
{
    //create new node
    Node* new_node = new Node(d);
    tail -> next = new_node;
    tail = new_node;
}

void InsertatPosition(Node* &head, Node* &tail, int position, int d)
{
    //inserting object at position 1
    if(position==1){
        InsertatHead(head,d);
        return;
    }

    Node* temp = head;
    int cnt=1;

    while(cnt<position-1){
        temp = temp -> next;
        cnt++;
    }

    //inserting object at last position
    if(temp -> next == NULL){
        InsertatTail(tail,d);
        return;
    }

    //create new node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

void deleteNode(Node* &head, int position)
{
    if(position==1){
        Node* temp = head;
        head = head -> next;
        //memory free start node
        temp -> next = NULL;
        delete temp;
    }
    else{
        //deleting any middle or last node
        Node* current = head;
        Node* previous = NULL;

        int cnt=1;
        while(cnt<position){
            previous = current;
            current = current -> next;
            cnt++;
        }
        previous -> next = current -> next;
        current -> next = NULL;
        delete current;
    }
}

void PrintHead(Node* &head)
{
    Node* temp = head;
    cout<<"NULL -> ";
    while(temp!=NULL){
        cout<<temp -> val<<" -> ";
        temp = temp -> next;
    }cout<<"NULL"<<endl;
}

bool detectLoop(Node* head)
{
    if (head == NULL){
        return false;
    }

    map<Node*, bool> visited;

    Node* temp = head;

    while(temp != NULL){
        //cycle is present
        if(visited[temp]==true){
            cout<<"Cycle present on element: "<<temp -> val<<endl;
            return true;
        }
        visited[temp] = true;
        temp = temp -> next;
    }
    return false;
}

int main()
{
    Node* node1 = new Node(13);
    cout<< node1 -> val <<endl;
    cout<< node1 -> next <<endl;

    //head pointed to node1
    Node* head = node1;
    Node* tail = node1;

    InsertatTail(tail,15);
    PrintHead(head);

    InsertatHead(head,12);
    PrintHead(head);

    InsertatPosition(head,tail,3,14);
    PrintHead(head);
    InsertatPosition(head,tail,1,11);
    PrintHead(head);
    InsertatPosition(head,tail,6,16);
    PrintHead(head);
    
    deleteNode(head, 1);
    PrintHead(head);

    return 0;
}