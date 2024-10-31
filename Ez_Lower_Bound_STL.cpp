/*
The first line of the input contains the number of integers .
 The next line contains  integers in sorted order.
The next line contains , the number of queries. Then  lines follow each containing a single integer .

Note: If the same number is present multiple times,
 you have to print the first index at which it occurs.
  Also, the input is such that you always have an answer for each query.

input: 
 8
 1 1 2 2 6 9 9 15
 4
 1
 4
 9
 15

output:
 Yes 1
 No 5
 Yes 6
 Yes 8

*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

using ll = long long;
int main() {
    ll n; cin>>n;
    ll array[n];
    vector<ll> V;

    // enter array
    for (int i = 0; i < n; ++i)
    {
        cin>>array[i];
        V.push_back(array[i]);
    }
    // Sort V
    sort(V.begin(),V.end());

    ll Q; cin>>Q;
    ll Y[Q]; 
    // Enter the query element
    for (int i = 0; i < Q; i++)
    {
        cin>>Y[i];
    }

    // Search and compare print out
    for (int i = 0; i < Q; i++) 
    {
        // Use binary search to find the index of Y[i] in the sorted array V
        auto it = lower_bound(V.begin(), V.end(), Y[i]);// Trả về vị trí
        if (*it == Y[i]) {
            // Element found
            cout << "Yes " << it - V.begin() + 1 << endl;
        } else {
            // Element not found
            cout << "No " << it - V.begin() + 1 << endl;
        }
    }




    cout<<endl;
    return 0;
}
