#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(10);
    v.push_back(23);
    v.push_back(15);
    v.push_back(12);

    // Optionally, you can print the elements of the vector
    cout << "Elements of the vector: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    cout<<"first element of the vector is :"<<v.front()<<endl;
    cout<<"last element of the vector is :"<<v.back()<<endl;
   cout<<"size of the vector is :"<<v.size()<<endl;
   cout<<"capacity of the vector is :"<<v.capacity()<<endl;

   cout<<"max_size of the vector is :"<<v.max_size()<<endl;
    cout<<"before remove element"<<endl;
    v.pop_back();
    cout<<"after remove element"<<endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
