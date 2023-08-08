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
};

int main()
{
    Hero hero1;
    hero1.setHealth(50);
    hero1.setLevel('A');

    char name[7] = "Akshit";
    hero1.setname(name);

    hero1.print();

    //use deafault copy constructor
    Hero hero2(hero1);// or Hero hero2 = hero1
    hero2.print();

    hero1.name[0] = 'R';
    hero1.print();
    hero2.print();   //THIS IS DEEP COPY


    //now the scene is
    // hero1.name[0] = 'R';
    // hero1.print();
    // hero2.print();     //THIS IS SHALLOW COPY (DEFAULT)


    return 0;
}