#include<iostream>
#include<map>
using namespace std;

class Node 
{
    public:
    int data;
    Node* next;

    //constrcutor
    Node(int d) {
        this->data = d;
        this->next = NULL;
    }

    ~Node() {
        int value = this->data;
        if(this->next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }

};

void InsertNode(Node* &tail, int element, int d) 
{
    //empty list
    if(tail == NULL) {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{
        //non-empty list
        //assuming that the element is present in the list

        Node* curr = tail;

        while(curr->data != element) {
            curr = curr -> next;
        }
        
        //element found -> curr is representing element wala node
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;

    }

}    

void printNode(Node* tail) 
{
    Node* temp = tail;

    //empty list
    if(tail == NULL) {
        cout << "List is Empty "<< endl;
        return ;
    }

    do {
        cout << tail -> data << " ";
        tail = tail -> next;
    } while(tail != temp);

    cout << endl;
} 

void DeleteNode(Node* &tail, int value) 
{
    //empty list
    if(tail == NULL) {
        cout << " List is empty, please check again" << endl;
        return;
    }
    else{
        //non-empty

        //assuming that "value" is present in the Linked List
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value) {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        //1 Node Linked List
        if(curr == prev) {
            tail = NULL;
        }

        //>=2 Node linked list
        else if(tail == curr ) {
            tail = prev;
        }

        curr -> next = NULL;
        delete curr;

    }

}

bool isCircularList(Node* head) 
{
    //empty list
    if(head == NULL) {
        return true;
    }

    Node* temp = head -> next;
    while(temp != NULL && temp != head ) {
        temp = temp -> next;
    }

    if(temp == head ) {
        return true;
    }

    return false;

}

bool detectCycle(Node* head) 
{
    if(head == NULL){
        return false;
    }

    map<Node*, bool> visited;

    Node* temp = head;

    while(temp !=NULL) {

        //cycle is present
        if(visited[temp] == true) {
            cout<<"Cycle present on element: "<<temp -> data<<endl;
            return true;
        }

        visited[temp] = true;
        temp = temp -> next;

    }
    return false;

}

Node* floydDetectLoop(Node* head)
{
    if(head == NULL){
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;

    while(slow!=NULL && fast!=NULL){
        fast = fast -> next;
        if(fast!=NULL){
            fast = fast -> next;
        }
        slow = slow -> next;

        if(slow==fast){
            cout<<"Present at "<< slow -> data<< endl;
            return slow;
        }
    }
    return NULL;
}

Node* getStartingNode(Node* head)
{
    if(head==NULL){
        return NULL;
    }

    Node* intersection = floydDetectLoop(head);
    Node* slow = head;

    while(slow!=intersection){
        slow = slow -> next;
        intersection = intersection -> next;
    }

    return slow;
}

void removeLoop(Node* head) {
    if (head == NULL) {
        return;
    }
    Node* startOfLoop = getStartingNode(head);
    if (startOfLoop == NULL) {
        return;  // No loop to remove
    }
    Node* temp = startOfLoop;
    while (temp->next != startOfLoop) {
        temp = temp->next;
    }
    temp->next = NULL;
}

int main()
{
    Node* tail = NULL;

    InsertNode(tail, 10, 10);
    printNode(tail);
    InsertNode(tail, 10, 20);
    printNode(tail);
    InsertNode(tail, 20, 30);
    printNode(tail);
    InsertNode(tail, 30, 40);
    printNode(tail);
    InsertNode(tail, 40, 50);
    printNode(tail);
    InsertNode(tail, 50, 60);
    printNode(tail);
    InsertNode(tail, 60, 70);
    printNode(tail);
   

    DeleteNode(tail, 30);
    printNode(tail);


    if(isCircularList(tail)) {
        cout << "Linked List is Circular in nature" << endl;
    }
    else{
        cout << "Linked List is not Circular " << endl;
    }

    if(floydDetectLoop(tail)!= NULL){
        cout<<"Cycle is present"<<endl;
    }else{
        cout<<"No cycle is present"<<endl;
    }

    cout<<"The node at which the loop starts: "<<getStartingNode(tail)->data<<endl;

    removeLoop(tail);
    printNode(tail);

    return 0;
}