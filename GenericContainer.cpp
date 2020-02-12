#include <iostream>
using namespace std;
template <typename T>
class Container
{
private:
    T var;

public:
    explicit Container(T t) : var(t) {}
    friend ostream& operator<<(ostream &os, const Container<T>&c)
    {
        return (os << c.var);
    }
};

int main()
{
    Container <int> c(100);
    cout << c;
    return 0;
}