#include <iostream>
using namespace std;

class A
{
    int a;

public:
    void setData(int a)
    {
        this->a = a;
    }
    void getData()
    {
        cout << "Value of a is --> " << a << endl;
    }
};
int main()
{
    A obj;
    obj.setData(65);
    obj.getData();
    return 0;
}