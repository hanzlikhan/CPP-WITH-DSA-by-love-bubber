#include <iostream>
using namespace std;
int findLength(char name[]){
    int count=0;
    for (int i = 0; name[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}
char lowecase(char str1){
    if(str1>='a' && str1<='z'){
        return str1;
    }else{
        return str1-'A'+'a';
    }
}
bool check_palindrome(char name[],int n){
    int s = 0;
    int e = n-1;
    while (s<=e)
    {
        if(lowecase(name[s]) != lowecase(name[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
    
}
int main(){
    char name[10];
    cout<<"enter your name :";
    cin>>name;
    cout<<"your name is "<<name<<endl;
    cout<<findLength(name)<<endl;
    int size = findLength(name);
    cout<<check_palindrome(name,size);
    return 0;
}