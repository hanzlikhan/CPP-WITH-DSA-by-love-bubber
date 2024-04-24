#include <iostream>
using namespace std;
int binarySearch(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
}
int main(){
    int arr1[6] = {2,4,6,8,12,18};
    int arr2[5] = {3,5,7,9,11};

    binarySearch(arr1,6,18);
    binarySearch(arr2,5,10);
}