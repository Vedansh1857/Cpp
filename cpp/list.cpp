#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
    list<int> :: iterator iter = lst.begin();
    while(iter!=lst.end()){
        cout<<*iter<<" ";
        iter++; 
    }
    cout<<endl;
}

int main()
{
    list<int> l1; // A list of length 0
    l1.push_back(5);
    l1.push_back(7);
    l1.push_back(1);
    l1.push_back(9);
    l1.push_back(12);
    // display(l1);
    // Removing elements from the list...
    // l1.pop_back();
    // l1.pop_front();
    // l1.remove(9);

    // Sorting the list...
    // l1.sort();
    // display(l1);

    // Reversing the list...
    l1.reverse();
    display(l1);

    list<int> l2(3); // An empty list of length 3
    list<int> :: iterator it = l2.begin();
    *it = 45;
    it++;
    *it = 9;
    it++;
    *it = 10;
    it++;
    // display(l2);
    cout<<"list 1 before merging...";
    display(l1);
    cout<<"list 1 after merging...";
    l1.sort();
    l2.sort();
    l1.merge(l2);
    display(l1);
    return 0;
}