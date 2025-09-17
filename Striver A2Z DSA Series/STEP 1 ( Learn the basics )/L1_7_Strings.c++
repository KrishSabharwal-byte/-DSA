#include <iostream>
using namespace std;

void printName(string name) {
    cout<< "Hey" << name << endl;
}

int main() {
    string name;
    cin>> name;
    printName(name);

    string name2;
    cin >> name2;
    printName(name2);
}

// Sum of 2 numbers
# include <iostream>
using namespace std;

int sum(int num1, int num2) {
    int num3 = num1 + num2;
    
    return num3;
}

int main() {
    int num1;
    int num2;
    cin>> num1 >> num2;
    int result = sum(num1, num2);
    cout<<result;
    return 0;
}