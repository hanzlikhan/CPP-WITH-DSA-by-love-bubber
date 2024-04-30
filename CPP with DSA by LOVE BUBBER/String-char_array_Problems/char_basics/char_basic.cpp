#include <iostream>
using namespace std;
int main(){
    char ch[10];
    cout<<"Enter a string: ";
    cin>>ch;    // hanzla gormani
    cout<<"You entered: "<<ch<<endl;  // hanzla 
    // because char stop execution when we give space or tab '\t'  or new line '\n'
    // char add '\0' at the last of the string. to find the end of the string
    return 0;
}