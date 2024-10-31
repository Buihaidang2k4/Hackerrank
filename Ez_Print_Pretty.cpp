/*
Input Format

The first line contains an integer, , the number of test cases.
Each of the T subsequent lines describes a test case as 3 space-separated floating-point numbers: A, B, and C, respectively.

Constraints
1<= T <= 1000
Each number will fit into a double.

Output Format

For each test case, print  lines containing the formatted , , and , respectively. Each , , and  must be formatted as follows:

1 A: Strip its decimal (i.e., truncate it) and print its hexadecimal representation (including the  prefix) in lower case letters.
2 B: Print it to a scale of  decimal places, preceded by a  or  sign (indicating if it's positive or negative), right justified, and left-padded with underscores so that the printed result is exactly  characters wide.
3 C: Print it to a scale of exactly nine decimal places, expressed in scientific notation using upper case.
Sample Input

1  
100.345 2006.008 2331.41592653498
Sample Output

0x64             
_______+2006.01  
2.331415927E+03
Explanation

For the first line of output,  (in reverse, ).
The second and third lines of output are formatted as described in the Output Format section.
 */


#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;

		/* Enter your code here */
	
	}
	return 0;

}