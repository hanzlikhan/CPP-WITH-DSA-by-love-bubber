#include <iostream>
#include<map>
using namespace std;

int main(){
    map<int,string> m;
    m[1]="hanzla";
    m[13]="khan";
    m[5]="gormani";
    m.insert({3,"khaani"});
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<" ";
    }

    cout<<"finding 13 in the map :"<<m.count(13)<<endl;
    m.erase(13);
    cout<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<" ";
    }

    auto it = m.find(5);
    for(auto i = it; it!=m.end();i++){
        cout<<(*i).first<<endl;
    }

}