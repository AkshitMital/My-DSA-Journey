// Demonstrate k queues in a single array in time and space efficient way
#include<iostream>
using namespace std;

// A C++ class to represent k queues in a single array of size n
class kQueues
{
	// Array of size n to store actual content to be stored in queue
	int *arr;

	// Array of size k to store indexes of front elements of the queue
	int *front;

	// Array of size k to store indexes of rear elements of queue
	int *rear;

	// Array of size n to store next entry in all queues		
	int *next;
	int n, k;

	int freeSpot; // To store the beginning index of the free list

public:
	//constructor to create k queue in an array of size n
	kQueues(int k, int n){
        this -> n = n;
        this -> k = k;
        front = new int[k];
        freeSpot = 0;
        rear = new int[k];
        for(int i=0; i<k; i++){
            front[i] = -1;
            rear[i] = -1;
        }
        next = new int[n];
        for(int i=0; i<n; i++){
            next[i] = i+1;
        }
        next[n-1] = -1;
        arr = new int[n];
    }

    void enqueue(int data, int qn)
    {
        //overflow
        if(freeSpot == -1){
            cout<<"No empty space is available"<<endl;
            return;
        }

        //find first free index
        int index = freeSpot;

        //update freeSpot
        freeSpot = next[index];

        //check whether first element
        if(front[qn - 1] == -1){
            front[qn - 1] = index;
        }else{
            //link new element to the previous element
            next[rear[qn-1]] = index;
        }

        //update next
        next[index] = -1;

        //update rear
        rear[qn-1] = index;

        //push element
        arr[index] = data;

    }

    int dequeue(int qn)
    {
        // Underflow
        if (isEmpty(qn))
        {
            cout << "Queue Underflow"<<endl;
            return -1;
        }

        // Find index to pop
        int index = front[qn-1];

        // front ko aage badhao
        front[qn-1] = next[index];

        // FreeSpots ko manage kro
        next[index] = freeSpot;
        freeSpot = index;

        // Return the previous front item
        return arr[index];
    }

	bool isFull() { 
        return (freeSpot == -1); 
    }

	bool isEmpty(int qn) { 
        return (front[qn] == -1); 
    }
};

int main()
{
	// Let us create 3 queue in an array of size 10
	int k = 3, n = 10;
	kQueues ks(k, n);

	// Let us put some items in queue number 2
	ks.enqueue(15, 3);
	ks.enqueue(45, 3);

	// Let us put some items in queue number 1
	ks.enqueue(17, 2);
	ks.enqueue(49, 2);
	ks.enqueue(39, 2);

	// Let us put some items in queue number 0
	ks.enqueue(11, 1);
	ks.enqueue(9, 1);
	ks.enqueue(7, 1);

	cout << "Dequeued element from queue 3 is " << ks.dequeue(2) << endl;
	cout << "Dequeued element from queue 2 is " << ks.dequeue(1) << endl;
	cout << "Dequeued element from queue 1 is " << ks.dequeue(0) << endl;

	return 0;
}
