#include<bits/stdc++.h>

using namespace std;

class Car{
public :
    string name;
    int price;
    int seats;
    string type;
 
};

void print(Car c){
    cout <<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<endl;
}
int main(){
    Car c1 , c2 , c3;
    c1.name = "Hyundai Verna";
    c1.price = 1200000;
    c1.seats = 5;
    c1.type = "Sedan";

    c2.name = "VW Polo GT";
    c2.price = 800000;
    c2.seats = 4;
    c2.type = "HatchBack";

    c3.name = "Toyota Fortuner";
    c3.price = 3600000;
    c3.seats = 7;
    c3.type = "SUV";

    print(c1);
    print(c2);
    print(c3);

    return 0;
}