#include <iostream>
#include <string>

using namespace std;

string (&func())[10];

typedef string strs[10];
strs& func();

int main()
{
    
    return 0;
}
