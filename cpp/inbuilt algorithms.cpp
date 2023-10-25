#include<bits/stdc++.h>
using namespace std;

int main()
{
    int v[] = {2,3,1,7,6,7};

    int min = *min_element(v,v+6);
    cout<<min<<endl;

    int max = *max_element(v,v+6);
    cout<<max<<endl;

    int sum = accumulate(v,v+6,0);
    cout<<sum<<endl;

    int cnt = count(v,v+6,7);
    cout<<cnt<<endl;

    auto elem = find(v,v+6,3);
    cout<<*elem<<endl;

    // To reverse a vector (can also be implemented on a string)
    reverse(v,v+6);
    for(auto &i : v){
        cout<<i<<" ";
    }

    // Can also be printed lyk this...
    for(auto it=v;it!=v+6;it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    string s = "abcdEFGHijkl";
    reverse(s.begin()+1,s.end());
    cout<<s;
    return 0;
}