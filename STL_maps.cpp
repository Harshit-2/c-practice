#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    // Map is an associative array
    map<string, int> marksMap; // marksMap is just a name you can use any name
    marksMap["Atul"] = 58;
    marksMap["Rohit"] = 57;
    marksMap["Kishlay"] = 78;
    marksMap["Aditya"] = 65;
    marksMap["Sachin"] = 53;

    map<string, int>::iterator iter;    // iter is the name of the iterator
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << "\t" << (*iter).second << endl;
    }

    return 0;
}