/*#include<bits/stdc++.h>
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
    int maxi, large = INT_MIN;
    for(int k=0;k<n;k++){
        maxi = max(large,arr[k]);
    }
    // cout<<maxi;
    int brr[maxi];
    for(int m=0;m<maxi;m++){
        brr[m] = 0;
    }
    for(int i=0;i<n;i++){
        brr[arr[i]] += 1;
    }
    for(int j=0;j<n;j++){
        if(brr[j] == 1){
            cout<<j<<endl;
        }
    }
    return 0;
}*/

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
    int ans = 0;
    for(int i=0;i<n;i++){
        ans = ans ^ arr[i];
    }
    cout<<ans<<endl;
    return 0;
}