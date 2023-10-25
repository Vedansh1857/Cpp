#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    /*string str;*/
    /*cin>>str; // First way to declare a string...
    cout<<str;*/

    /*string s1(5,'n'); // Second way to declare a string. 5 is the size of string... So it will print n 5 times.
    cout<<s1<<endl;*/

    /*string s2 = "VedanshGupta"; // Third way...
    cout<<s2<<endl;*/

    /*getline(cin,str); // This function is used to input a sentence.
    cout<<str<<endl;*/

    // If we use only cin function to input a sentence , it will input only the first word

    /*string s1 = "Fam";
    string s2 = "ily";
    s1.append(s2) // First method to join two strings
    s1 = s1 + s2; // Second method to join two strings
    cout<< s1 <<endl;*/

    /*string s1 = "Fam";
    string s2 = "ily";
    cout<<s1[2]<<endl;*/ // To access the letters of a string

    /*string st1 = "lhdsf lckhw ifhhf owhfou whfowmorhqow";
    st1.clear(); // Erases the string, making it empty
    cout<<st1<<endl;*/

    /*string s1 = "xyz";
    string s2 = "abc";
    if(s1.compare(s2) == 0) // To chk if the two strings are equal or not
        cout<<"The strings are equal";
    else
        cout<<"Not equal";*/

    /*string s1 = "xyz";
    if(!s1.empty()) // Returns true if the string is empty.
        cout<<"String is not empty";*/

    /*string s1 = "compation";
    s1.erase(3,5); // 3 is the index which is to be deleted & 5 is the no. of elements from index 3 to be deleted
    cout<<s1;*/

    /*string s1 = "contradiction";
    cout<<s1.find("dict");*/ // Returns the starting index of the given argument

    /*string s1 = "contradiction";
    s1.insert(3,"lol"); // It inserts the given string lol at index 3
    cout<<s1;*/

    /*string s1 = "contradiction";
    cout<<s1.size(); // Returns the number of characters in the string
    cout<<s1.length();*/ // Works exactly same as the size functions 

    /*string s1 = "contradiction";
    string s2 = s1.substr(6 , 4); // Returns the substring from index 6 till next 4 letters
    cout<<s2;*/

    /*string num = "786";
    int x = stoi(num); // Converts strings to integer directly
    cout<<x;*/

    /*int x = 786;
    cout<<to_string(x)<<endl; // Converts integer to string directly
    cout<<to_string(x)+"2"<<endl;*/

    /*string st = "lagfiuculvbwliubq";
    sort(st.begin() , st.end()); // This function returns the sorted string & is present in the algorithm header file
    cout<<st;*/
    return 0;
}