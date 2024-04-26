#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
void selectSo(vector<int> arr,int n){
    for(int i=0;i<n-1;i++){
        int mini = i;
        for(int j= i+1;j<n;j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }
        swap(arr[mini],arr[i]);
    }
}
int main(){
    vector<int> arr = {64,25,12,22,11};
    cout<<selectSo(arr,5);
}