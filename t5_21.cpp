#include <iostream>
#include <string>

using namespace std;

int main()
{
    string buf;
    string tmp;
    bool flag = false;
    while(cin >> tmp && !tmp.empty()){
        if(islower(tmp[0])){
            continue;
        }
        if(buf.compare(tmp) == 0){
            flag = true;
            break;
        }
        buf = tmp;
    }
    if(flag){
        cout << "double string is " << buf << endl;
    }
    else{
        cout << "no double string" << endl;
    }

    return 0;
}
