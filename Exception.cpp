#include <iostream>
#include <exception>
#include <string>
using namespace std;

class ResourceException : public exception
{
private:
    string w;

public:
    ResourceException(const string &w) : w(w) {}
    const char *what() noexcept
    {
        return w.c_str();
    }
};

class SomethingImportant
{
public:
    SomethingImportant()
    {
        throw ResourceException("Unable to open resource I");
    }
};

int main()
{
    try
    {
        SomethingImportant si;
    }
    catch (exception &except)
    {
        cout << except.what();
        return 1;
    }

    return 0;
}