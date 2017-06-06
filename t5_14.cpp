#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, int> m;
    string word;
    while(cin >> word){
        if(m.find(word) == m.end()){
            m[word] = 1;
        }
        else{
            m[word] += 1;
        }
    }
    int cnt = 0;
    string ret;
    for(map<string, int>::iterator it = m.begin(); it != m.end(); ++it){
        if(it->second > cnt){
            cnt = it->second;
            ret = it->first;
        }
    }
    cout << endl << ret << ":" << cnt << endl;
    return 0;
}

