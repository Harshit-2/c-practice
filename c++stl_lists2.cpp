#include <iostream>
#include <list>

using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << "\t";
    }
}
// We can also enter elements in a list using the iterator and its dereferencer
int main()
{

    list<int> list2(3); // empty list of length 3
    list<int>::iterator it = list2.begin();
    *it = 45;
    it++;
    *it = 6;
    it++;
    *it = 9;
    it++;

    display(list2);
    return 0;
}