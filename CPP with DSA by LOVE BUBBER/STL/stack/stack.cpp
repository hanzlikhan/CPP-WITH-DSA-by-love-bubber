#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<string> s;// stack of string

    s.push("hanzla");
    s.push("faiz");
    s.push("gormani");
    cout<<"Top element : "<<s.top()<<endl;

    s.pop();
    cout<<"Top element : "<<s.top()<<endl;
}