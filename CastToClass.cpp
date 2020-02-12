#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    int ID; 
    string name;

public:
    Student() : ID(0), name(""){}
    Student(string name) : name(name), ID(0){}
    Student(int ID, string name) : ID(ID), name(name) {}
    void showData(); 
};

void Student ::showData()
{
    cout << "ID is " << ID << " Name is " << name;
}

int main()
{
    string name = "Suryan";
    Student obj(1, "Arun");
    obj.showData();
    cout << "\n";
    obj = name;
    obj.showData();
    return 0;
}