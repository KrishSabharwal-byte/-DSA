#include <bits/stdc++.h>
using namespace std;

    void explainPair() {

        pair<int, int> p = {1, 3};

        cout<< p.first << " " << p.second;

        pair<int, pair<int, int>> p = {1, {3, 4}};

        cout<< p.first << " " << p.second.second << " " << p.second.first;

        pair<int, int> arr[] = { {1, 2}, {2, 5}, {5, 1}};
        
        cout << arr[1].second;
    }

    void explainVector() {

        vector <int> v;

        v.push_back(1);
        v.emplace_back(2);

        vector <pair<int, int>>vec;

        v.push_back({1, 2});
        v.emplace_back(1, 2);

        vector<int> v(5, 100);

        vector <int> v(5);

        vector<int> v1(5, 20);
        vector<int> v2(v1);

        //Erase or Delete
        v.erase(v.begin()+1);

        v.erase(v.begin()+2, v.begin() + 4);


        vector <int>v(2,100) // 100, 100
        v.insert(v.begin(), 300); //300, 100, 100
        v.insert(v.begin() + 1, 2, 10); //300, 10, 10, 100, 100

        cout<<v.size();

        v.pop_back();

            // v1 = {10,20}
            // v2 = {30,40}
        v1.swap(v2); // v1 = {30,40} , v2 = {10,20}

        v.clear();

        cout<<v.empty();    
    }

void explainList() {
    list <int> ls; 

    ls.push_back(2);    // 2
    ls.emplace_back(4); // 2,4

    ls.push_front(5);   // 5,2,4

    ls.emplace_front(); // 2,4
}

void explainDeque() {
    deque<int>dq;
    // all other fn same as vectors
    // begin, end, rend, rbegin, clear, inser, size, swap, pop, push, emplace
}

void explainStack() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(3);
    st.emplace(5);

    cout<< st.top();

    st.pop();

    cout<< st.top();

    cout<< st.size();

    cout<< st.empty();

    stack<int>st1, st2;
    st1.swap(st2);
}

void explainQueue() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(3);
    
    q.back() += 5;

    cout << q.back();  //will print 9

    cout<< q.front(); // 1

    q.pop(); // 2,9
    

    cout<< q.front();
}

void explainPQ() {
    priority_queue<int>pq;

    pq.push(5); // 5
    pq.push(2); // 5,2
    pq.push(8); // 8,5,2
    pq.emplace(10); // 10,8,5,2

    pq.pop(); // 
}

void explainSet() {
    set<int>st;
    st.insert(1); // 1
    st.emplace(2); // 1,2
    st.insert(2);  // 1,2
    st.insert(4);  // 1,2,4
    st.insert(3);  // 1,2,3,4
}

voud explainMap() {
    map<int, int> map;

    map<int, pair<int, int>> map;

    map< pair<int, int> map;

    map[1] = 2;
    map.emplace({3,1});
    map.insert({2,4});

    map[{2,3}] = 10;

    for(auto it : map) {
        cout<< it.first << " " << it.second << endl;

        cout<< map[1];
        cout<< map[5];

        auto it = map.find(3);
        cout<< *(it).second
    
        auto it = map.lower_bound(2);
        auto it = map.upper_bound(3);
    
    }

}