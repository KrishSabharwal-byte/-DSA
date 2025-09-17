#include <bits/stdc++.h>
using namespace std;

int print1(int n) {                         // ****
    for(int i = 0; i<n; i++){               // ****
        for(int j = 0; j<n; j++){           // ****
            cout<<"*";
        }
            cout<<endl;
    }
} 

int print2(int n) {                         // *
    for(int i=0; i<n; i++) {                // **
        for(int j=0; j<=i; j++) {           // ***
            cout<<"*";
        }
        cout<<endl;
    }
}

int print3(int n) {                         // 1
    for(int i=1; i<=n; i++) {               // 1 2
        for(int j=1; j<=i; j++){            // 1 2 3
            cout<< j << " ";
        }
        cout<<endl;
    }
}

int print4(int n) {                         // 1
    for(int i = 1; i<=n; i++){              // 2 2 
        for(int j = 1; j<=i; j++){          // 3 3 3
            cout<< i << " ";
        }
        cout<<endl;
    }
}

int print5(int n) {                         // ***
    for(int i = 1; i<=n; i++){              // **
        for(int j = 0; j<n-i+1; j++){       // *
            cout<< "* ";
        }
        cout<<endl;
    }
}

int print6(int n) {                         // 123
    for(int i=0; i<n; i++) {                // 12
        for(int j=1; j<n-i+1; j++){         // 1
            cout<< j << " ";
        }
        cout<< endl;
    }
}

int print7(int n) {                         //   *  
    for(int i = 0; i<n; i++) {              //  ***
        // space                            // *****
        for(int j = 0; j<n-i-1; j++) {
            cout<< " ";
        }
        // star
        for(int j = 0; j< 2*i+1; j++) {
            cout<< "*";
        }
        // space
        for(int j = 0; j<n-i-1; j++) {
            cout<< " ";
        }

        cout<<endl;
    }
}

int print8(int n) {                         // *****
    for(int i=0; i<n; i++){                 //  ***
        // space                            //   *
        for(int j=0; j<i; j++) {
            cout<< " ";
        }
        // star 
        for(int j=0; j< 2*n-(2*i + 1); j++) {
            cout << "*";
        }
        // space 
        for(int j=0; j<i; j++) {
            cout<< " ";
        }
        cout<< endl;
    }
}

int print9(int n ) {
    //Pattern 9 is a mix of pattern 7 and 8
}

int print10(int n) {                        //*
    for(int i=1; i<2*n; i++) {              //** 
        int stars = i;                      //*** 
        if(i > n) stars = 2*n - i;          //** 
        for(int j=1; j<= stars; j++){       //*
            cout<<"*";
        }
        cout<< endl;
    }
}

int print11(int n) {                        // 1
    int start = 1;                          // 0 1
    for(int i=0; i<n; i++) {                // 1 0 1
        if(i % 2 == 0) start=1;
        else start = 0;
        for(int j=0; j<=i; j++) {
            cout<< start;
            start = 1-start;
        }
        cout<<endl;
    }
}

int print12(int n) {                        //1        1
    int space = 2* (n-1);                   //12      21
    for(int i=1; i<=n; i++) {               //123    321
        // num                              //1234  4321
        for(int j =1; j<=i; j++) {          //1234554321
            cout<< j ;
        }
        for(int j = 1; j<=space; j++){
            cout<< " ";
        }
        for(int j = i; j>=1; j--) {
            cout<< j ;
        }
        cout<<endl;
        space -= 2;
    }
}

int print13(int n) {                        // 1
    int num = 1;                            // 2 3
    for(int i = 1; i<=n; i++) {             // 4 5 6 
        for(int j = 1; j<=i; j++) {
            cout<< num << " ";
            num = num + 1;
        }
        cout << endl;
    }
}

int print14(int n) {                        // A
                                            // AB
    for(int i = 0; i<=n; i++) {             // ABC                        
        for(char ch = 'A'; ch <= 'A' + i; ch++) {               
            cout<< ch <<" ";
        }
        cout<< endl;
    }
}

int print15(int n) {                        // ABC 
                                            // AB
    for(int i = 0; i<n; i++) {              // A                 
        for(char ch = 'A'; ch<='A' + (n-i-1); ch++) {          
            cout<< ch << " ";                            
        }
        cout<< endl;
    }
}

int print16(int n) {                       // A 

    for(int i=0; i<n; i++) {               // BB
         char ch = 'A' + i;                // CCC 
        for(int j=0; j<=i; j++) {
            cout<< ch<< " ";
        }
        cout<<endl;
    }
    
}

int print17(int n) {                       //   A
  for(int i = 0; i<n; i++) {               //  ABA
        // space                           // ABCBA 
        for(int j = 0; j<n-i-1; j++) {     
            cout<< " ";
        }
        // character
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for(int j=1; j<=2*i+1; j++){
            cout<< ch;
            if(j <= breakpoint) ch++;
            else ch--;
        }

        
        // space
        for(int j = 0; j<n-i-1; j++) {
            cout<< " ";
        }

        cout<<endl;
    }
}

int print18(int n) {
    for(int i=0;i<=n;i++) {
        for(char ch = 'E' - i; ch <= 'E'; ch++){
            cout << ch << " ";
        }
        cout<<endl;
    }
}

int print19(int n) {
    int iniS = 0;
    for(int i= 0; i<n; i++) {
        for(int j=1; j<=n-i; j++) {
            cout<< "*";
        }

        for(int j=0; j<iniS; j++) {
            cout<<" ";
        }

        for(int j=1; j<=n-i; j++) {
            cout<< "*";
        }
        iniS += 2;
        cout<<endl;
    }
    iniS = 6;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++){
            cout<< "*";
        }

        for(int j=0; j<iniS; j++){
            cout<<" ";
        }

        for(int j=1; j<=i; j++) {
            cout<<"*";
        }
        iniS -= 2;
        cout<< endl;
    }
}

int print20(int n) {
    int spaces = 2*n - 2;
    for(int i=1; i<= 2*n-1; i++) {
        int stars = i;
        if(i > n) stars = 2*n -i;
        
        for(int j=1; j<=stars; j++) {
            cout<< "*";
        }

        for(int j=0; j<spaces; j++) {
            cout<<" ";
        }

        for(int j=1; j<=stars; j++) {
            cout<< "*";
        }
        cout<<endl;
        if(i < n) spaces -= 2;
        else spaces += 2;
    }
}

int print21(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i == 0 || j == 0 || i == n-1 || j == n-1) {
                cout << "*";
            }
            else cout << " ";
        }
        cout<< endl;
    }
}

int print22(int n) {
    for(int i=0; i<2*n-1; i++) {
        for(int j=0; j<2*n-1; j++) {

            int top = i;
            int left = j;
            int right = (2*n - 2) -j;
            int down = (2*n - 2) - i;

            cout<<(n- min(min (top, down), min(left, right)));
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cin>>n;
    print22(n);
}