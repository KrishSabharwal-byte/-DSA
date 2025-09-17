// Digit Count 

#include <bits/stdc++.h>
using namespace std;

int count( int n) {
    // int count = (int)(log10(n) + 1);
    int count = 0;
    while(n>0) {
        count = count + 1;
        n = n/10;
    }
    cout<<count;
}

// Reverse a number 

int reverseNum(int n) {
    int reverseNum = 0;
    while(n>0) {
        int ld = n % 10;
        reverseNum = ( reverseNum * 10) + ld;
        n = n/10;
    }
    cout<<reverseNum;
    return reverseNum;
}

// Check Pallindrome 

int Pallindromme(int n) {
    int reverseNum = 0;
    int dup = n;
    while(n>0) {
        int ld = n % 10;
        reverseNum = ( reverseNum * 10) + ld;
        n = n/10;
    }
    if(dup == reverseNum) cout<< "true";
    else cout << "false";
}


// Armstrong Number 
int Armstrong(int n) {
    int sum = 0;
    int dup = n;
    while(n>0) {
        int ld = n % 10;
        sum = sum + (ld*ld*ld);
        n = n/10;
    }
    if(sum == dup) cout<< "true";
    else cout << "false";
}

// Divisors 
int printDivisor(int n) {
    for(int i=1; i<=n; i++) {
        if(n%i == 0) {
            cout<< i << " ";
        }
    }
}

// GCD 
int printGCD(int n1,int n2) {
   
    int qcd = 1;
    for(int i = 1; i<=min(n1,n2); i++)

    if(n1%i == 0 && n2 % i == 0){
        qcd = i;
    }
    cout<<qcd;
}

// Euclidean Algo
int gcd(int a, int b)
{
    while(a > 0 && b  > 0){
        if(a > b) a = a % b;
        else b = b%a;
    }
    if(a == 0) cout<< b;
    else cout<<a;
}

int main() {
    int a, b;
    cin>>a;
    cin>>b;
    gcd(a, b);
}