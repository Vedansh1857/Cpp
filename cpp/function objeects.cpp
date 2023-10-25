#include<iostream>
#include<algorithm>
// #include<functional>
using namespace std;

int main()
{
    // Function objects(Also called as functors) : Function wrapped in a class so that it is available like an object...
    int arr[] = {1,73,4,2,54,7};
    sort(arr,arr+6,greater<int>());
    for(int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}