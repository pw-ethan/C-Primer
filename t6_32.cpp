#include <iostream>

using namespace std;

int& get(int *arr, int index)
{
    return arr[index];
}

int factorial(int val)
{
    if(val != 0){
        return factorial(val - 1) * val;
    }
    else{
        return 1;
    }
}

int main()
{
    int ia[10];
    for(int i = 0; i != 10; ++i){
        get(ia, i) = i;
    }
    cout << factorial(5) << endl;
    return 0;
}
