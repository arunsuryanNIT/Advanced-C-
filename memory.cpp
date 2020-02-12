#include <iostream>
#include <memory>
using namespace std;
class Number
{
private:
    int t;

public:
    Number(int t) : t(t)
    {
        cout << "Constructing it ";
    }
    ~Number()
    {
        cout << "Destructor ";
    }
};
int main()
{
    Number* num = new Number(1);
    unique_ptr<Number> nu = make_unique<Number>(2);
    return 0;
}