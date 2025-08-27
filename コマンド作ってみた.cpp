#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(int argc, const char*argv[]) {
cout << "hello" << endl;
vector<string> argv_str;
for (size_t i = 0; i < argc; i++)
{
argv_str.push_back(static_cast<string>(argv[i]));
}

if (!argv_str.empty()) {
    for(size_t i = 0; i < argc; i++) {
    cout << argv_str[i] << endl;
    }
}
cin.get();
return 0;
}