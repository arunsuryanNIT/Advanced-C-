#include <iostream>
using namespace std;

template <typename T>
class Vector
{
private:
    int capacity, current;
    T *arr;

public:
    Vector() : capacity(1), current(0), arr(new T[1]) {}
    void push_back(T);
    void push_data(int, T);
    int get_location(int index);
    void pop_back();
    int get_size();
    int get_capacity();
    void print();
};

template <typename T>
void Vector<T>::push_back(T data)
{
    if (current == capacity)
    {
        T *temp = new T[2 * capacity];
        for (int i = 0; i < capacity; i++)
        {
            temp[i] = arr[i];
        }
        delete[] arr;
        arr = nullptr;
        capacity *= 2;
        arr = temp;
    }
    arr[current] = data;
    current++;
}

template <typename T>
void Vector<T>::push_data(int index, T data)
{
    if (index == capacity)
    {
        push_back(data);
    }
    else
    {
        arr[index] = data;
    }
}

template <typename T>
int Vector<T>::get_location(int index)
{
    if (index < capacity)
        return arr[index];
}

template <typename T>
void Vector<T>::pop_back()
{
    --current;
}

template <typename T>
int Vector<T>::get_size()
{
    return current;
}

template <typename T>
int Vector<T>::get_capacity()
{
    return capacity;
}

template <typename T>
void Vector<T>::print()
{
    for (auto i = 0; i <= current; i++)
        cout << arr[i] << " ";
}

int main()
{
    Vector<char> vec;
    int capacity;
    cin >> capacity;
    for (auto i = 0; i < capacity; i++)
    {
        char element;
        cin >> element;
        vec.push_back(element);
    }
    cout << "Capacity is " << vec.get_capacity() << endl;
    cout << "Size is " << vec.get_size() << endl;
    vec.pop_back();
    vec.print();
    return 0;
}