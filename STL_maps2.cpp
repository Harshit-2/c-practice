#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, int> marksMap;
    // marksMap["Atul"] = 58;
    // marksMap["Rohit"] = 57;
    // marksMap["Kishlay"] = 78;
    // marksMap["Aditya"] = 65;
    // marksMap["Sachin"] = 53;

    marksMap.insert({{"Rohan", 89}, {"Akshat", 46}});   // to add elemrnts using insert

    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << "\t" << (*iter).second << endl;
    }

    return 0;
}