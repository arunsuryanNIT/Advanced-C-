#include <iostream>
using namespace std;
int *func(int num1, int num2)
{
    static int arr[2];
    arr[0] = num1 + num2;
    arr[1] = num1 - num2;
    return arr;
}
int main()
{
    cout << *(func(2, 3)) << " " << *(func(2, 3) + 1);
    return 0;
}