#include <iostream>
#include <vector>

using namespace std;

void toVector(const int *nums, const int& sz, vector<int> &v)
{
    for(int i = 0; i < sz; ++i){
        v.push_back(nums[i]);
    }
}


void printVector(const vector<int> &v)
{
    for(vector<int>::const_iterator it = v.begin(); it != v.end(); ++it){
        cout << *it << "\t";
    }
    cout << endl;
}

bool compareVectors(const vector<int> &v1, const vector<int> &v2)
{
    vector<int>::size_type sz = v1.size();
    if(sz > v2.size()){
        sz = v2.size();
    }
    for(vector<int>::size_type i = 0; i < sz; ++i){
        if(v1[i] != v2[i]){
            return false;
        }
    }
    return true;
}

int main()
{
    int numsa[] = {0, 1, 1, 2};
    int numsb[] = {0, 1, 1, 2, 3, 5, 8};
    vector<int> va;
    vector<int> vb;
    toVector(numsa, sizeof(numsa)/sizeof(*numsa), va);
    toVector(numsb, sizeof(numsb)/sizeof(*numsb), vb);
    printVector(va);
    printVector(vb);
    cout << compareVectors(va, vb) << endl;
    return 0;
}
