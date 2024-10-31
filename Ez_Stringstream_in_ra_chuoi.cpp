/*
input: 22,33,44
output:
22
33
44
*/

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    // Complete this function
    stringstream ss(str);
    vector<int> a;
    string temp;
    while(getline(ss,temp,','))
    {
        a.push_back(stoi(temp));        
    }
    return a;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str); // Chuyển chuỗi thành một số nguyên 
   /*
    for(int i = 0; i < integers.size(); i++) 
    {
        cout << integers[i] << "\n";
    }
    */
    // vòng lặp không cần khai báo i
    for(auto a : integers)
    {
        cout<<a<<endl;
    }
    return 0;
}