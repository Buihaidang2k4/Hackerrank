/*
input:
5
1 6 10 8 4

output:
1 4 6 8 10

int size=v.size();
v.push_back(x);(where x is an integer.The size increases by 1 after this.)
v.pop_back(); (After this the size decreases by 1)
sort(v.begin(),v.end()); (Will sort all the elements in the vector
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

using ll = long long;
int main() {
    vector<ll> v;

    cout<<"Input n:";
    ll n; cin>>n; 
    ll x[n];


    for (int i = 0; i < n; ++i)
    {   
        cout<<"x["<<i<<"]= ";
        cin>>x[i];
        v.push_back(x[i]);
    }

    // Sort vector
    sort(v.begin(),v.end());

    cout<<"write n numbers in vector: ";
    for (int i = 0; i < n; ++i)
    {
            cout<<v[i]<<" ";
    }

    cout<<endl;
    return 0;
}

