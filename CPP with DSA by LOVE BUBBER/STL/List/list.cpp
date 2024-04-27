#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"size of the list before remove the elment is :"<<l.size()<<endl;
    l.erase(l.begin());
    cout<<"size of the list after remove the elment is :"<<l.size();
}