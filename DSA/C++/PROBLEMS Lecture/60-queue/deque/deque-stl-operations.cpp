#include <bits/stdc++.h>
using namespace std;



int main() {
    int n=10;
    deque<int> d(n);
    cout<<"size of d: "<<d.size()<<endl;
    d.push_back(23);
    d.push_front(223);
    cout<<"size of d: "<<d.size()<<endl;
    cout<<"front: "<<d.front()<<endl;
    cout<<"back: "<<d.back()<<endl;
    cout<<"element: "<<d[0]<<endl;
    cout<<"element: "<<d.at(1)<<endl;
    cout<<"check empty: "<<d.empty()<<endl;
    cout<<"maxsize: "<<d.max_size()<<endl;
    d.shrink_to_fit();
    cout<<"maxsize: "<<d.max_size()<<endl;

    return 0;
}