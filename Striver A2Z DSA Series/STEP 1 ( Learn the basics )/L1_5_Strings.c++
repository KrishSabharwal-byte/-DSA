# include <iostream>
# include <string.h>
using namespace std;

int main() {
    string s = "Striver";
    int len = s.size();
    s[len - 1] = 'z';
    cout<< s[len - 1]<<endl;
    cout<< s[4];
    return 0;
}