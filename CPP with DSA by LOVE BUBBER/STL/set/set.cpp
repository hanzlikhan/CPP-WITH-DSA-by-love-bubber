#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(3);
    s.insert(0);
    s.insert(3);

    for(int i : s) {
        cout << i << endl;
    }

    auto it = s.begin();
    std::advance(it, 0); // Move iterator to the second element
    s.erase(it);

    cout << "After erasing the second element:" << endl;
    for(int i : s) {
        cout << i << endl;
    }
    cout<<"4 is present or not :"<<s.count(4)<<endl;
    auto it2 = s.find(3);

    for(auto it = it2; it != s.end(); it++) {
    cout << *it << " ";
}
    // s.erase(it2);


    return 0;
}
