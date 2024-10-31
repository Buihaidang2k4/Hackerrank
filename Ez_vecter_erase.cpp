#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/*
Ex: v.erase(v.begin()+4); (erases the fifth element of the vector v)
Ex: v.erase(v.begin()+4); (erases the fifth element of the vector v)
Dữ liệu đầu tiên của dòng chứa một số nguyên.
Dòng tiếp theo chứa các số nguyên được phân tách bằng dấu cách (chỉ số dựa trên 1).
Dòng thứ ba chứa một số nguyên duy nhất, biểu thị vị trí của phần tử cần loại bỏ khỏi vectơ. 
Dòng thứ tư chứa hai số nguyên Và biểu hiện phạm vi cần xóa bao gồm a và không bao bao b.
input:
6
1 4 6 2 8 9
2
2 4

output:
3
1 8 9
*/
using ll = long long;
int main() {
    vector<ll> v;
    ll size;
    cin>>size;
    ll array[size];
    //  enter elements
    for (int i = 0; i < size; ++i)
    {
        cin>>array[i];
        v.push_back(array[i]);
    }

    // delete elements condition
    cout<<"deletionlocation:";
    ll deletionlocation; cin>>deletionlocation;
    v.erase(v.begin()+deletionlocation-1);

    cout<<"array after deletion deletionlocation: ";
    for(auto a : v)
    {
        cout<<a<<" ";
    }

    cout<<"\nfirst && last: ";
    ll first,last; cin>>first>>last;
    v.erase(v.begin()+first-1,v.begin()+last-1);
    
    // Size vector
    cout<<"Size delete after:"<<v.size()<<endl;
    // Print elements in the vector
    for(auto a : v)
    {
        cout<<a<<" ";
    }
    
    cout<<endl;
    return 0;
}
