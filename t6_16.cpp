#include <iostream>
#include <string>

using namespace std;

bool is_empty(const string& s)
{
    return s.empty();
}

int main()
{
    string s1;
    string s2("hello");
    const string s3("world");
    cout << is_empty(s1) << endl;
    cout << is_empty(s2) << endl;
    cout << is_empty(s3) << endl;
    cout << is_empty("hi") << endl;
    return 0;
}
