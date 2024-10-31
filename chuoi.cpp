#include <iostream>
#include <string>
using namespace std;
/*
input:
abcd
ef

output:
4 2
abcdef
ebcd af
*/
int main() {
    string a,b;

    getline(cin,a);
    getline(cin,b);
    int lena = a.size();
    int lenb = b.size();

    cout<<lena<<" ";
    cout<<lenb<<endl;

    string c = a+b;
    cout<<c<<endl;

    swap(a[0],b[0]);
    cout<<a<<" ";
    cout<<b;

    cout<<endl;  
    return 0;
}