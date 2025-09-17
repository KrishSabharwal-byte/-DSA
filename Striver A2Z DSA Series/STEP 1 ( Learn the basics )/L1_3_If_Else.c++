#include <iostream>
using namespace std;

int main()
{
    int age;
    cin >> age;
    if (age >= 18)
    {
        cout << "Adult";
    }
    else
    {
        cout << "Not Adult";
    }
    return 0;
}

// Marks System

#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << " Enter the marks : "<<endl;
    cin>> marks;
    if (marks < 25)
    {
        cout << "F";
    }
    else if (marks >= 25 && marks <= 44)
    {
        cout << "E";
    }
    else if (marks >= 45 && marks <= 49)
    {
        cout << "D";
    }
    else if (marks >= 50 && marks <= 59)
    {
        cout << "C";
    }
    else if (marks >= 60 && marks <= 79)
    {
        cout << "B";
    }
    else if (marks >= 80 && marks <= 100)
    {
        cout << "A";
    }

    return 0;
}


// Nested If Else
# include <iostream>
using namespace std;

int main() {
    int age;
    cout<<"Enter the age : ";
    cin>>age;

    if(age < 18) {
        cout<< "Not eligible for job" <<endl;
    }else if(age <= 57) {
        cout<< "Eligible for job";
        if(age >= 54) {
            cout<< " , but Retirment soon";
        }
    } else {
        cout<<"Retirment time";
    }
    return 0;

}

