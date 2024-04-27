#include <iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(2);
    d.push_back(1);
    d.push_front(3);
    d.push_front(4);
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"cehck the deque is empty or not"<<d.empty()<<endl;
    cout<<"the size of the deque is"<<d.size()<<endl;

    // remove

    d.erase(d.begin(),d.begin()+1);

    cout<<"the size of the deque after remove of the element "<<endl;
    cout<<"the size of the deque is"<<d.size()<<endl;

    for(int i:d){
        cout<<i<<" ";
    }

}