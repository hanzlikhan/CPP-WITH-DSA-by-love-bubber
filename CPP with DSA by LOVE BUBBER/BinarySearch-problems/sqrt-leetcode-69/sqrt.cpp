#include <iostream>
using namespace std;
long long int sqrtFind(int n){
    int s = 0;
    int e = n;
    long long int ans = -1;
    long long int mid = s+(e-s)/2;
    while(s<=e){
        long long int square = mid*mid;
        if(square == n){
            return mid;
        }
        if(square < n){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        
    }
    return ans;
}
double morePercision(int n,int percision,int tempSol){
    double fact= 1;
    double ans = tempSol;
    for(int i=0;i<percision;i++){
        fact = fact/10;
        for(double j=0;j*j<n;j=j+fact){
            ans = j;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
    int tempSol = sqrtFind(n);
    cout<<morePercision(n,3,tempSol);


}