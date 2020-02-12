#include <iostream>
using namespace std;

class Complex{
private:
    int real;
    int imaginary;
public:
    Complex() : real(0), imaginary(0){}
    void getData(int real, int imaginary);
    Complex* operator +(const Complex &Obj);
    void showData();
    };

void Complex :: getData(int real, int imaginary){
this->real = real;
this->imaginary = imaginary;
}

Complex* Complex :: operator+(const Complex &Obj){
Complex* temp = new Complex();
temp->real += real + Obj.real;
temp->imaginary += imaginary + Obj.imaginary;
return temp;
}

void Complex :: showData(){
cout << real << " + " << imaginary << "i";
}

int main(){

Complex Number1, Number2;
int real, imaginary;

cout << "Enter real and imaginary of first complex number" << endl;
cin >> real >> imaginary;
Number1.getData(real, imaginary);

cout << "Enter real and imaginary of second complex number" << endl;
cin >> real >> imaginary;
Number2.getData(real, imaginary);

Complex *Number3 = new Complex();
Number3 = Number1 + Number2;
Number3->showData();
delete Number3;
Number3 = NULL;
return 0;
}