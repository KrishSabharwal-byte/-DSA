#include <iostream>
#include <string.h>
using namespace std;

//Pass by value 
void doSomething(string s) {
    s[0] ='t';
    cout<< s << endl;
}
int main() {
    string s = "raj";
    doSomething(s);
    cout<< s << endl;
    return 0;
}

//Pass by Value 
void doSomething(int &num) {
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
   
}

int main() {
    int num = 10;
    doSomething(num);
    cout << num << endl;
    return 0;
}