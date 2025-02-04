/*
input 1 2 3 4 5
output 10 14

1) 2+3+4+5 = 14
2) 1+3+4+5 = 13
3) 1+2+4+5 = 12
4) 1+2+3+5 = 11
5) 1+2+3+4 = 10
*/

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'miniMaxSum' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void miniMaxSum(vector<int> arr) {
    // Size
    int n = arr.size();

    // Sắp xếp mảng để có thể dễ dàng lấy giá trị min và max
    sort(arr.begin(), arr.end());
    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }
    // Tính tổng min và max
    long long sumMin = sum - arr[n - 1];
    long long sumMax = sum - arr[0];

    cout << sumMin << " " << sumMax;

}

int main()
{

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(5);

    for (int i = 0; i < 5; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    miniMaxSum(arr);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
