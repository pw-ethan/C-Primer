#include <iostream>
#include <initializer_list>

using namespace std;

int sum(initializer_list<int> li)
{
    int sum = 0;
    for(const int &num : li){
        sum += num;
    }
    return sum;
}

int main()
{
    cout << sum({1, 2, 3}) << endl;
    cout << sum({1, 2}) << endl;
    return 0;
}
