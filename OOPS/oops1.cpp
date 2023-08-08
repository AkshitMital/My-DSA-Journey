#include<iostream>
using namespace std;

class Hero 
{
    //properties
    private:
    int health;

    public:
    
    /* //default constructor
    Hero(){
        cout<<"Constructor is called"<<endl;
    }*/

    //parameterised constructor
    Hero(int health, char level){
        this -> health = health;
        this -> level = level;
    }

    Hero(Hero& temp){         //& is used for pass by reference
        this -> health = temp.health;
        this -> level = temp.level;
    }

    void print(){
        cout<<"Health is "<< health<<endl;
        cout<<"Level is "<< level<<endl;
    }

    char level;

    int getHealth(){
        return health;
    }
    void setHealth(int h){
        health = h;
    }

    char getLevel(){
        return level;
    }
    void setLevel(int l){
        level = l;
    }
};

int main()
{
    Hero John_Wick(100,'A');
    //copy constructor
    //Hero Batman(John_Wick);
    Hero Batman(John_Wick);
    Batman.print();

    /*
    //static allocation
    Hero John(100,'A');
    //John.print();
    cout<<"Address of John is "<< &John<<endl;
    cout<<"Health is: "<<John.getHealth()<<endl;
    cout<<"Level is: "<<John.getLevel()<<endl;

    //dynamic allocation
    Hero *h = new Hero(90,'B');
    cout<<"Address of h is "<< &h<<endl;
    // h->setHealth(100);
    // h->setLevel('A');
    //h->print();

    cout<<"Health is: "<<(*h).getHealth()<<endl;
    cout<<"Level is: "<<(*h).getLevel()<<endl;
    //             OR
    cout<<"Health is: "<<h->getHealth()<<endl;
    cout<<"Level is: "<<h->getLevel()<<endl;

    // cout<<"Size: "<<sizeof(John)<<endl;

    // //cout<<"Health is: "<<John.health<<endl;
    // John.setHealth(100);
    // cout<<"Health is: "<<John.getHealth()<<endl;

    // cout<<"Level is: "<<John.getLevel()<<endl;
    */
    return 0;
}