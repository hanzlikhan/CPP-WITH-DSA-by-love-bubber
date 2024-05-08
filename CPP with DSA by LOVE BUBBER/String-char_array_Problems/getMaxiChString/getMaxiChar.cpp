#include <iostream>
using namespace std;
char getmaxi(string s){
    char arr[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int num = 0;
        num = ch - 'a';
        arr[num]++;
    }
    int maxi = -1,ans = 0;
    for (int i = 0; i < 26; i++){
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
        
    }
    return 'a' + ans;

}
int main(){
    string s;
    cin>>s;
    cout<<getmaxi(s)<<endl;

}