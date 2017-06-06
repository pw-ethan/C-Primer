#include <iostream>

using namespace std;

void myabs(int val)
{
    cout << (val >= 0 ? val : -val) << endl;
}

int main(void)
{
    myabs(2);
    myabs(-2);
    return 0;
}
