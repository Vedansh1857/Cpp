#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the length of the array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : "<<endl;
    for(int k=0;k<n;k++){
        cin>>arr[k];
    }
    int i=0;
    while(i<=n){
        if(i+1<n){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
        i+=2;
    }
    cout<<"Array after swapping : "<<endl;
    for(int m=0;m<n;m++){
        cout<<arr[m]<<" ";
    }
    return 0;
}