#include <iostream>
#include <string>
using namespace std;
class Student{
private:
    int rollNum;
    string name;
    static int counter;
public:
    Student() : rollNum(0), name("") {++counter;}
    Student(int ID, string name) : rollNum(ID), name(name) {}
    static int countMethod(){
        return counter;
    }
};
int Student :: counter = 0;
int main(){
    Student A, B, C;
    cout << Student::countMethod();
}
