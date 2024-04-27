#include <iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("hanzla");
    q.push("faiz");
    q.push("khan");
    cout<<"size before pop "<<q.size()<<endl;
    cout<<"first element "<<q.front()<<endl;
    cout<<"last element of the list is :"<<q.back()<<endl;
    q.pop();
    cout<<"size after pop "<<q.size()<<endl;
    cout<<"first element "<<q.front()<<endl;
    cout<<"last element of the list is :"<<q.back()<<endl;
}