/*#include<iostream>
#include<map>
using namespace std;

// Map is an associative array...
int main()
{
    map<string,int> marksMap;
    marksMap["Vedansh"] = 90;
    marksMap["Kartikey"] = 80;
    marksMap["Kaushki"] = 70;

    // Insetion in maps...
    marksMap.insert({{"Krishna",60}, {"Deval",50},{"Aditi",40}});

    map<string,int> :: iterator iter;
    for(iter=marksMap.begin();iter!=marksMap.end();iter++){
        cout<<(iter)->first<<" : "<<(iter)->second<<endl;
    }

    // To get the size of our map...
    cout<<"The size of our map is : "<<marksMap.size()<<endl;
    cout<<"The max size of our map is : "<<marksMap.max_size()<<endl;
    cout<<"The empty's return value of our map is : "<<marksMap.empty()<<endl;


    return 0;
}*/

// -------------------------------------------------------------------------------------------------------------------------------

#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string> m;
    m[1] = "Vedansh";
    m[5] = "Kartikey";
    m[4] = "Aditi";
    m.insert({3,"Krishna"});
    m.insert({2,"Deval"});

    // // First method to iterate
    // map<int,string> :: iterator iter = m.begin();
    // while(iter != m.end()){
    //     cout<<(*iter).first<<" "<<(*iter).second<<endl;
    //     iter++;
    // }

    // Second method to iterate
    // auto it = m.begin();
    // while(it != m.end()){
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    //     it++;
    // }

    //.find in maps
    // map<int,string> :: iterator iter = m.find(5);
    auto iter = m.find(4); // returns an iterator... so it needs to be stored in an iterator variable
    cout<<iter->first<<" "<<iter->second;
    //.erase in maps
    cout<<endl;
    m.erase(2);
    for(auto &it : m){
        cout<<(it).first<<" "<<(it).second<<endl;
    }
    return 0;
}