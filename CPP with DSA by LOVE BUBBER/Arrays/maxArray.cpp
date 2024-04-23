// how to declare array
//   
//  arr[]
//   we can also declare array in this way
// arr[5]   5 is a size of array
//   size = 5
//  we cant write arr[size] this is bad thought

// write a program for find maimum number from an array
#include <iostream>
using namespace std;
int main(){
    int size = 5;
    int arr[10]; 
    int max = INT32_MIN; 
    cout<<"enter a values of an array :";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
        if(arr[i] > max){
            max = arr[i];
        }
}
cout << "The maximum element is " << max << endl;

    return 0;
}