#include <iostream>
using namespace std;
int findOcc(int arr[],int n,int key){
    int start = 0;
    int end = n-1;
    int ans = 0;
    int mid = start+(end-start)/2;
    while (start<=end)
    {
        if(arr[mid]==key){
            ans = mid;
            end = mid-1;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
    cout<<"First Occurence of "<<key<<" is at index "<<ans<<endl;
    return ans;
    
}
int main(){
    int arr[6] = {1,2,3,5,3,7};
    findOcc(arr,6,3);
}