#include <iostream>
#include <string>

using namespace std;

int main()
{
    string rsp;
    do{
        string str1, str2;
        cout << "please enter the first string : ";
        cin >> str1;
        cout << "please enter the second string : ";
        cin >> str2;
        cout << "the shortest string is " << (str1.size() > str2.size() ? str2 : str1) << endl;
        cout << "more? enter yes or no : ";
        cin >> rsp;
    }while(!rsp.empty() && rsp[0] != 'n');
    return 0;
}
