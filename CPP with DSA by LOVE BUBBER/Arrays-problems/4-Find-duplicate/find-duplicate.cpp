#include<iostream>
using namespace std;

int findduplicate(vector<int> &arr){
    int ans=0;
    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];  
    }
    for (int i = 1; i <arr.size(); i++)
    {
        ans = ans^i;
    }
    return ans;
    
}
int main(){
    vector<int> nums = {1, 2, 3, 1, 5};
    cout<<findduplicate(nums);
    return 0;
}