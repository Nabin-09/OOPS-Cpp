#include<bits/stdc++.h>

using namespace std;

class Hero{
    private : 
    int health;

    public:
    char level;

    void print(){
        cout << level << " ";
    }

    int getHealth(){
        return health;
    }

    int getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char c){
        level = c;
    }
};

int main(){
    Hero Nabin;
    cout<<"Nabin's health : "<<Nabin.getHealth()<<endl;
    Nabin.setHealth(42);

    return 0;   
}