/*Friend functions are not a member function of a class
They can be friends to any number of class 
They can be declared by friend keyword
It does not matter if you declare them in public or private
We invoke friend function without object*/
#include <iostream>
using namespace std;
class Dominos;
class PizzaHut
{
private:
    int price;

public:
    PizzaHut() : price(0) {}
    PizzaHut(int price) : price(price) {}
    friend void sum(PizzaHut, Dominos);
};

class Dominos
{
private:
    int price;

public:
    Dominos() : price(0) {}
    Dominos(int price) : price(price) {}
    friend void sum(PizzaHut, Dominos);
};

void sum(PizzaHut Obj1, Dominos Obj2)
{
    cout << Obj1.price + Obj2.price;
}

int main()
{
    PizzaHut Obj1(56);
    Dominos Obj2(5);
    sum(Obj1, Obj2);
    return 0;
}