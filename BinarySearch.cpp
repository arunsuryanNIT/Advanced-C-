#include <iostream>
#include <vector>
using namespace std;
int result = -1;
int binarySearch(vector<int> &vec, int start, int end, int element)
{
    if (end >= start)
    {
        int middle = start + (end - start) / 2;
        if (vec[middle] == element)
        {
            result = middle;
            return binarySearch(vec, start, middle - 1, element);
        }
        else if (vec[middle] > element)
            return binarySearch(vec, start, middle - 1, element);
        return binarySearch(vec, middle + 1, end, element);
    }
    return result;
}
int main()
{
    int capacity;
    vector<int> vec;
    cin >> capacity;
    for (auto i = 0; i < capacity; i++)
    {
        int element;
        cin >> element;
        vec.push_back(element);
    }
    int element;
    cin >> element;
    cout << binarySearch(vec, 0, vec.size() - 1, element);
}