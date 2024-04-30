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
bool check_palindrome(char name[],int n){
    int s = 0;
    int e = n-1;
    while (s<=e)
    {
        if(name[s] != name[e]){
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