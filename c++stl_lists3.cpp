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

int main()
{

    list<int> list1; // empty list of 0 length

    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);

    list1.pop_back();   // To remove elempent from last
    display(list1);
    cout << endl;
    list1.pop_front();  // To remove elempent from starting
    display(list1);
    cout << endl;
    list1.remove(9);    // To remove element from the middle
    display(list1);

    return 0;
}