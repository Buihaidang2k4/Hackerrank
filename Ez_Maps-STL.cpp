/*
input:
7
1 Jesse 20
1 Jess 12
1 Jess 18
3 Jess
3 Jesse
2 Jess
3 Jess

output:
30
20
0

The first line of the input contains  where  is the number of queries. The next  lines contain  query each.
The first integer,  of each query is the type of the query.
If query is of type , it consists of one string and an integer and where  is the name of the student and  is the marks of the student.
 If query is of type  or ,it consists of a single string  where  is the name of the student.
 */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    std::map<string, int> m;
    int queries;
    int type, y;
    string x;
    cin >> queries;

    for (int i = 0; i < queries; ++i) {
        cin >> type;
        if (type == 1) {
            cin >> x >> y; // Read name of the student and marks
            m[x] += y; // Update or insert student marks
        } else if (type == 2) {
            cin >> x; // Read name of the student to remove
            m.erase(x); // Erase student from map
        } else if (type == 3) {
            cin >> x;
            if (m.find(x) != m.end()) {
                cout << m[x] << endl; // Print marks of the student if found
            } else {
                cout << 0 << endl; // Otherwise print 0
            }
        }
    }

    return 0;
}


