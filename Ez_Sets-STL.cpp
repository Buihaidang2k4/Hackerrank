/*
input:
8
1 9
1 6
1 10
1 4
3 6
3 14
2 6
3 6
output:
Yes
No
No
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    set<int> s;
    int n; cin>>n;
    for(int i = 0;i < n;i++) {
        int x,y;
        cin >> x >> y;
        if(x == 1) 
            s.insert(y);
        else if(x == 2) 
            s.erase(y);
        else {
            if(s.find(y) != s.end())
            {
                cout<<"Yes"<<endl;
            }else
            {
                cout<<"No"<<endl;
            }
        }
    }
    
    return 0;
}



