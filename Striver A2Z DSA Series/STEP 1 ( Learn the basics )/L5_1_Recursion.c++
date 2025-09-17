#include <bits/stdc++.h>
using namespace std;

int cnt = 0;
void print()
{
    if (cnt == 3)
        return; // Base Case
    cout << cnt << endl;
    cnt++;
    print();
}

int main()
{
    print();
    return 0;
}

// Print name n times

void f(int i, int n)
{
    if (i > n)
        return;
    cout << "Krish" << endl;
    f(i + 1, n);
}

int main()
{
    int n;
    cin >> n;
    f(1, n);
    return 0;
}

// 1 to n using recurssion

void f(int i, int n)
{
    if (i > n)
        return;
    cout << i << endl;

    f(i + 1, n);
}

int main()
{
    int n;
    cin >> n;
    f(1, n);
    return 0;
}

// n to 1 using recursion

void f(int i, int n)
{
    if (i < 1)
        return;
    cout << i << endl;

    f(i - 1, n);
}

int main()
{
    int n;
    cin >> n;
    f(n, n);
    return 0;
}

// Sum of first n numbers

// Parametarized
void f(int i, int sum)
{
    if (i < 1)
        return;
    cout << sum << endl;

    f(i - 1, sum + i);
}

int main()
{
    int n;
    cin >> n;
    f(n, 0);
}

// Functional
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return n + sum(n - 1);
}

int main()
{
    int n = 3;
    cout << sum(n) << endl;
    return 0;
}

// Factorial of n number 

// Funtional
int fact(int n) {
    if(n == 1) {
        return 0;
    }
    return n * fact(n-1)
}

int main(){
    int n = 3;
    cout<< fact(n) << endl;
    return 0;
}
