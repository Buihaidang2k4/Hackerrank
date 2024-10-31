/*
input :
STDIN           Function
-----           --------
6               arr[] size n = 6
-4 3 -9 0 4 1   arr = [-4, 3, -9, 0, 4, 1]
Sample Output:
0.500000
0.333333
0.166667

3 positive 3/6 = 0.5
2 negative 2/6 = 0,3333
1 zero 1/6 = 0,16666
*/

#include <bits/stdc++.h>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'plusMinus' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void plusMinus(vector<int> arr) {
    int n = arr.size();
    int am =0;
    int duong = 0;
    int khong = 0;
    
    for(int i=0;i<n;i++)
    {
      if(arr[i] > 0)
      {
         duong++;
      }
      if(arr[i] == 0) khong++;
      if(arr[i] <0) am++;
    }
    
    double a = (double)duong/n;
    double b = (double)am/n;
    double c = (double)khong/n;
    
    cout<<fixed<<setprecision(6)<< a<<"\n";
    cout<<fixed<<setprecision(6)<< b<<"\n";
    cout<<fixed<<setprecision(6)<< c<<"\n";
    

}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    plusMinus(arr);

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
