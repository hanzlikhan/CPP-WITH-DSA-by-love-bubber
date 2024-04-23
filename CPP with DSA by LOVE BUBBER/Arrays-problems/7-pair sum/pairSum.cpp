// pair sum algorithm

vector<int> ans;
for(i=0;i<size;i++){
    for(j=i+1;j<size;j++){
       if (arr[i]+arr[j] == s)
       {
         vector<int> temp;
        temp.push_back(min(arr[i],arr[j]));
        temp.push_back(max(arr[i],arr[j]));
        ans.push_back(temp);
       }
    }
}
sort(ans.begin(),ans.end());
return ans;