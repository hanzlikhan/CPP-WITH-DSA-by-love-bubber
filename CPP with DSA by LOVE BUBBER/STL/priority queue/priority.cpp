#include <iostream>
#include <queue>
using namespace std;

int main(){
    priority_queue<int> maxi;

    priority_queue<int, vector<int>, greater<int>> mini;
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    for(int i = 0;i<4;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);
    for(int i = 0;i<5;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
}