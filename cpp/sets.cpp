#include<bits/stdc++.h>
using namespace std;

void print1(multiset<string> &s){
    for(string value : s){
        cout<<value<<endl;
    }
}
void print2(multiset<string> &s){
    for(auto it=s.begin();it != s.end();it++){
        cout<<(*it)<<endl;
    }
}
// Sets stores the unique elements.
/*int main()
{
    unordered_set<string> s;
    s.insert("abc");
    s.insert("jgu");
    s.insert("ius");
    auto iter = s.find("abc");
    cout<<*iter;
    // s.erase(iter);
    print2(s);
    return 0;
}*/

int main()
{
    multiset<string> s;
    s.insert("abc");
    s.insert("jgu");
    s.insert("ius");
    s.insert("abc");
    // auto iter = s.find("frt");
    // if (iter != s.end())
    //     s.erase(iter);
    s.erase("abc");
    print2(s);
}