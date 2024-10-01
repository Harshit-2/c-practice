#include <iostream>
using namespace std;

struct employee
{
    int eId;
    char favChar;
    float salary;
};

int main()
{
    struct employee harry;
    harry.eId = 1;
    harry.favChar = 'c';
    harry.salary = 120000000;
    cout << "The value is " << harry.eId << endl;
    cout << "The value is " << harry.favChar << endl;
    cout << "The value is " << harry.salary << endl;
    return 0;
}
// **************OR**************
// #include <iostream>
// using namespace std;

// typedef struct employee
// {
//     int eId;      // 4
//     char favChar; // 1
//     float salary; // 4
// } ep;

// int main()
// {
//     ep harry;
//     struct employee shubham;
//     struct employee rohanDas;
//     harry.eId = 1;
//     harry.favChar = 'c';
//     harry.salary = 120000000;
//     cout << "The value is " << harry.eId << endl;
//     cout << "The value is " << harry.favChar << endl;
//     cout << "The value is " << harry.salary << endl;
//     return 0;
// }