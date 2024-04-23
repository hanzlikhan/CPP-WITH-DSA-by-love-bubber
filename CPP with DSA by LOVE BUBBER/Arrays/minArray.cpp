// write a program for find maimum number from an array
#include <iostream>
using namespace std;
int main(){
    int size = 5;
    int arr[10]; 
    int min = INT32_MAX; 
    cout<<"enter a values of an array :";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
        if(arr[i] < min){
            min = arr[i];
        }
}
cout << "The minimum element is " << min << endl;

    return 0;
}