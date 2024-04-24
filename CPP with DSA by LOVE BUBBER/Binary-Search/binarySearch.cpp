#include <iostream>
using namespace std;
int binarySearch(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    while (start<=end)
    {
        if (arr[mid]== key)
        {
            return mid;
        }
        if (key>arr[mid])
        {
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
        
    }
    return -1;
    
}
int main(){
    int arr1[6] = {2,4,6,8,12,18};
    int arr2[5] = {3,5,7,9,11};
    int result = binarySearch(arr1,6,18);
    cout<<"index of 18 found at "<<result<<endl;
    int res =  binarySearch(arr2,5,10);
    cout<<"index of 10 found at "<<res<<endl;
    return 0;
}