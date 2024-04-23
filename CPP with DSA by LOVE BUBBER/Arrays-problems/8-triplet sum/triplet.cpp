#include <iostream>
#include <vector>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int sum = 12;
   vector <vector<int>> ans;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            for(int k=j+1;k<5;k++){
                if(arr[i]+arr[j]+arr[k] == sum){
                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);
                    sort(temp.begin(),temp.end());
                    ans.push_back(temp);
                }
                 
            }
        }

    }
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;

}
}