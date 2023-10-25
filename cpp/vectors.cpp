#include<iostream>
#include<vector>
using namespace std;

template <class T>
void display(vector<T> &v){
    cout<<"The elements added are : "<<endl;
    for(int i=0;i<v.size();i++){
        // cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> vec1 = {2,3,5,6,7}; // Zero length vector
    // First method of iterating thru the vector 
    for(int i : vec1){
        cout<<i<<endl;
    }
    // Second method of iterating thru the vector
    // for(auto i=vec4.begin();i != vec4.end();i++){ 
    //     cout<<vec4.at(*i)<<endl;
    // }
    // Auto keyword automatically decides the data type of the variable.

    vector<char> vec2(4); // character vector of length four
    // vec2.push_back('5');
    // display(vec2);
    vector<char> vec3(vec2); // character vector of length four from vec2
    // display(vec3);
    vector<int> vec4(6,3); // 6 elements of 3s



    display(vec4);
    int element,size=5;
    // cout<<"Enter the size of the vector : "<<endl;
    // cin>>size;
    // cout<<"Enter the elements to add to the vector : "<<endl;i
    // for(int i=0;i<size;i++){
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    // vec1.pop_back();
    // display(vec1);
    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter,*(vec1.end()-1));
    // vec1.pop_back();
    // display(vec1);
    return 0;
}