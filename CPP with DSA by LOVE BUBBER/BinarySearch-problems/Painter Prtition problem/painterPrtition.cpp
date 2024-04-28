#include <iostream>
using namespace std;
int findfeasible(int board[],int n,int limit){  //55
    int sum = 0;
    int painter = 1;
    for(int i=0;i<n;i++){
        sum += board[i];  // 
        if(sum>limit){
            sum = board[i];  //30
            painter++;  //3 ..
        }
    }
    return painter;
}
int painterpartition(int board[],int n,int m){
    int totallength = 0; // total length of all boards
    int k = 0; // number of painters required
    for (int i = 0; i < n; i++)
    {
        k = max(k,board[i]); // 40
        totallength += board[i];  //100
    }
    int low = k;    //40
    int high = totallength;  //100
    while (low<high)  //56<63 56+63/2 = 60<59   false
    {
        int mid = (low+high)/2;  //find mid 126/2 = 59
        int painters = findfeasible(board,n,mid);//....
        if(painters<=m){  // 2
            high = mid;  //63
        }else{
            low = mid+1;  // 60
        }
    }
    return low;
}
int main(){
    int arr[] = {10,20,30,40};
    int n = 4;
    int m = 2;
    cout<<"minimum time to print boards :"<<painterpartition(arr,n,m);
}