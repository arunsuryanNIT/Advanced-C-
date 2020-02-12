#include <iostream>
using namespace std;

class Overload{
private:
    int value1, value2;
public:
    Overload() : value1(0), value2(0){}
    Overload(int value1, int value2) : value1(value1), value2(value2){}
    friend Overload operator+(Overload, Overload);
    void showData();
};

Overload operator+(Overload obj1, Overload obj2){
    Overload temp;
    temp.value1 = obj1.value1 + obj2.value1;
    temp.value2 = obj1.value2 + obj2.value2;
    return temp;
}

void Overload :: showData(){
    cout << value1 << " " << value2;
}

int main(){
    Overload obj1(2, 3), obj2(2,4);
    obj1.showData();
    cout << endl;
    obj2.showData();
    cout << endl;
    operator+(obj1, obj2).showData();
    return 0;
}