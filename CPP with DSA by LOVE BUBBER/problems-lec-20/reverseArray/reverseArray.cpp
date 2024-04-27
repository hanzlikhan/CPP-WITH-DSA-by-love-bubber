#include <iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int> arr,int n){
    int s = 0;
    int e = n-1;
    while (s<=e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    return arr;
}
void print(vector<int> arr){
    for(int i = 0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    vector<int> arr;
    arr.push_back(4);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(1);
    int n = arr.size();
    vector<int> ans = reverse(arr,n);
    print(ans);
}