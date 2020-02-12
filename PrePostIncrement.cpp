#include <iostream>
class Increment
{
private:
    int value;

public:
    Increment() : value(0) {}
    Increment(int x) : value(x) {}
    Increment operator++();    // Pre Increment
    Increment operator++(int); // Post Increment
    void printData();
};

Increment Increment ::operator++()
{
    Increment obj;
    obj.value = ++value;
    return obj;
}

Increment Increment ::operator++(int)
{
    Increment obj;
    obj.value = value++;
    return obj;
}

void Increment ::printData()
{
    std ::cout << value;
}
int main()
{
    std ::ios_base::sync_with_stdio(false);
    Increment Obj1, Obj2(4), Obj3, Obj4(5);
    Obj1 = Obj2.operator++();
    Obj3 = Obj4++;
    Obj1.printData();
    std ::cout << "\n";
    Obj3.printData();
    std::cout << std ::endl
              << "Obj4 is ";
    Obj4.printData();
    return 0;
}