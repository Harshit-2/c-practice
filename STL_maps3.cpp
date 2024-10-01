#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, int> marksMap;
    marksMap["Atul"] = 58;
    marksMap["Rohit"] = 57;
    marksMap["Kishlay"] = 78;
    marksMap["Aditya"] = 65;
    marksMap["Sachin"] = 53;

    marksMap.insert({{"Rohan", 89}, {"Akshat", 46}});

    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << "\t" << (*iter).second << endl;
    }

    cout << "The size is --> " << marksMap.size() << endl;
    cout << "The max size is --> " << marksMap.max_size() << endl;
    cout << "The empty return value is --> " << marksMap.empty() << endl;

    return 0;
}