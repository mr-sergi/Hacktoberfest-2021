#include <iostream>
#include <string.h>
using namespace std;
class Count
{
    int count;

public:
    Count()
    {
        count = 7;
    }
    int display()
    {
        return count;
    }
    // friend Complex add(Complex, Complex);
    void operator++()
    {
        count++;
    }
    void operator++(int)
    {
        count += 2;
    }
};
int main()
{
    Count C1, C2;
    cout << "Values of First Count: " << C1.display() << " and of Second Count: " << C2.display() << "\n";
    ++C1;
    C2++;
    cout << "Values of First Count: " << C1.display() << " and of Second Count: " << C2.display() << "\n";
    return 0;
}