#include <iostream>
#include<array>
using namespace std;
int main()
{
    array<int, 5> arr = {1, 2, 3, 4, 5};
    cout << "Element at 2nd Index : " << arr.at(2) << endl;
    cout<<"the size of this array is :"<<arr.size()<<endl;
    cout<<"to check the array is empty or not :"<<arr.empty()<<endl;
    cout<<"first element of the array is :"<<arr.front()<<endl;
    cout<<"last element of the array is :"<<arr.back()<<endl;
}
