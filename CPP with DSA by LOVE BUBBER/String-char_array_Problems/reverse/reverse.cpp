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
void reverStr(char name[],int size){
    int s = 0;
    int e = size-1;
    while (s<e)
    {
        swap(name[s++],name[e--]);
    }
    
}
int main(){
    char name[10];
    cout<<"enter your name :";
    cin>>name;
    cout<<"your name is "<<name<<endl;
    cout<<findLength(name);
    int size = findLength(name);
    reverStr(name,size);
    cout<<"your name is "<<name<<endl;
    return 0;
}