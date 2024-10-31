#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
string numberToWords(int num);


int main()
{
    cout<<"wirte number:";
    string n_temp;
    getline(cin, n_temp);

    int num  = stoi(ltrim(rtrim(n_temp)));
    string words = numberToWords(num);
    cout<<"numberToWords:"<<words<<endl;

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


string numberToWords(int num)
{
    switch (num)
    {
    case 1:
        return "one";
    case 2:
        return "two";
    case 3:
        return "three";
    case 4:
        return "four";
    case 5:
        return "five";
    case 6:
        return "six";
    case 7:
        return "seven";
    case 8:
        return "eight";
    case 9:
        return "nine";
    default:
        return "Greater than 9";
    }
}
