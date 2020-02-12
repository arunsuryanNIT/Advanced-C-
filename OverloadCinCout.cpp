#include <iostream>
using namespace std;
class Complex
{
private:
    int real, imaginary;

public:
    Complex() : real(0), imaginary(0) {}
    Complex(int real, int imaginary) : real(real), imaginary(imaginary) {}
    friend istream &operator>>(istream &, Complex &); //We can't make object of
    friend ostream &operator<<(ostream &, Complex);   //istream and ostream
};

istream &operator>>(istream &obj, Complex &value)
{
    obj >> value.real >> value.imaginary;
    return obj;
}

ostream &operator<<(ostream &obj, Complex value)
{
    obj << value.real << " " << value.imaginary;
    return obj;
}

int main()
{
    Complex obj1;
    operator>>(cin, obj1);
    operator<<(cout, obj1);
    return 0;
}