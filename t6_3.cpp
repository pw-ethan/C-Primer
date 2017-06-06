#include <iostream>

using namespace std;

int fact(int val)
{
    int ret = 1;
    while(val > 1){
        ret *= val--;
    }
    return ret;
}

int main(void)
{
    int i;
    cin >> i;
    cout << i << "! = " << fact(i) << endl;
    return 0;
}
