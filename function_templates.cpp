#include <iostream>
using namespace std;

template <class T1, class T2>
float funcAverage(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

int main()
{
    float a;
    a = funcAverage(5, 2);
    cout << "The average of these numbers is --> " << a << endl;

    float b;
    b = funcAverage(5, 2.8);
    printf("The average of these numbers is %.3f \n", b);

    return 0;
}