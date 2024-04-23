#include<iostream>
using namespace std;

int lineaerSearch(int arr[],int n,int item){
    for(int i=0;i<n;i++){
        if (arr[i]==item)
        {
            return 1;
        }
    }return 0;
}
int main(){
    int arr[] = {34,78,22,98,23};
    int item = 22;
    cout<<lineaerSearch(arr,5,item)<<endl;
}