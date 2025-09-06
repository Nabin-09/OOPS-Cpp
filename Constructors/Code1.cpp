#include<bits./stdc++.h>

using namespace std;

class Student{
public:
    string name;
    int rno;
    float gpa;

    //Contructor
    Student(string s , int r , float g){
        name = s;
        rno = r;
        gpa = g;
    }
};
int main(){
    Student s1("Nabin" , 21 , 8.5);
    cout <<s1.name<<" "<<s1.rno<<" "<<s1.gpa<<endl;
    //Nabin 21 8.5
    return 0;
}