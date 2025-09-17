// Reverse an array 

#include <bits/stdc++.h>
using namespace std;

void rev(int i, int arr[], int n) {
    if(i >= n/2) return;
    swap(arr[i], arr[n-i-1]);
    rev(i+1, arr, n);
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    rev(0, arr, n);
    for(int i=0; i<n; i++) cout<< arr[i] << " ";
    return 0;
}

// Pallindrome 

#include <bits/stdc++.h>
using namespace std;

bool f(int i, string &s) {
    if( i >= s.size()/2) return true;
    if(s[i] != s[s.size()-i-1]) return false;
    return f(i+1, s);
}

int main() {
    string s ="madam";
    cout<< f(0, s);
    return 0;
}


// Fibonaaci Seris 

#include<bits/stdc++.h>
using namespace std;

int f(int n){
    if(n <= 1) return n;
    int last = f(n-1);
    int Slast = f(n-2);
    return last + Slast;
}

int main() {
    cout<<f(6);
}

