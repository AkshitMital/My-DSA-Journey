#include<iostream>
using namespace std;

class Hero 
{
    //properties
    private:
    int health;

    public:
    char *name;
    char level;

     //default constructor
    Hero(){
        cout<<endl;
        cout<<"Constructor is called"<<endl;
        name = new char[100];
    }

    //parameterised constructor
    Hero(int health, char level){
        this -> health = health;
        this -> level = level;
    }

    Hero(Hero& temp){         //& is used for pass by reference
        
        char *ch = new char[strlen(temp.name)+1];        // DEEP COPY
        strcpy(ch,temp.name);
        this -> name = ch;
        

        this -> health = temp.health;
        this -> level = temp.level;
    }

    void print(){
        cout<<endl;
        cout<<"[ Name : "<< this->name<<", ";
        cout<<"Health : "<<this-> health<<", ";
        cout<<"Level : "<<this-> level<<" ]";
        cout<<endl;
        cout<<endl;
    }

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
    void setname(char name[]){
        strcpy(this->name,name);
    }

    ~Hero(){
        cout<<endl;
        cout<<"Destructor is called";
        cout<<endl;
    }
};

int main()
{
    //static allocation
    Hero a;

    //dynamic allocation
    Hero *b = new Hero();
    //manually destructor called
    delete b;

    return 0;
}