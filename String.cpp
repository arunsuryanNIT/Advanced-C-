#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "Arun Suryan";
    string str2("Arun Suryan");
    string str3(str);

    string str4 = {'A', 'R', 'U', 'N'};
    string last(str, 5, 5);
    string reverse(str.rbegin(), str.rend());

    cout << str << endl;
    cout << str2 << endl;
    cout << str3 << endl;

    cout << str4 << endl;
    cout << last << endl;
    cout << reverse << endl;

    //Finding substrigns
    size_t pos = str.find("yan");
    if (pos != string ::npos)
    {
        cout << "Substring found at " << pos << endl;
    }

    else
    {
        cout << "Substring not found " << endl;
    }

    //Appending the string
    string about = "is a programmer";
    str.push_back(' ');
    for (char c : about)
        str.push_back(c);
    cout << str << endl;

    //Insert into

    string into = "I have heard that ";
    str.insert(0, into);
    cout << str << endl;
    return 0;
}