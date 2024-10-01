#include <iostream>
#include <list>

using namespace std;

void display(list<int> &lst)    // lst is just the name of the name you can use any name
{
    list<int>::iterator it; // it is just the name of the iterator name you can use any name
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << "\t";
    }
}

int main()
{

    list<int> list1; // empty list of 0 length

    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);

    display(list1);

    return 0;
}