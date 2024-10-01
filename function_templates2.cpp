#include <iostream>
using namespace std;

template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 5, y = 7;
    swapp(x, y);
    cout << x << "\t" << y << endl;
    return 0;
}