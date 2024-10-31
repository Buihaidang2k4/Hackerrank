/*
input:
3
30 40 45 10 10
40 40 40 10 10
50 20 30 10 10

output:
1

dòng đầu chứa n học sinh trong lớp của kristen 
dòng 2 chứa điểm của kristen
so sánh xem có mấy học sinh trong lớp cao điểm hơn kristen
*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
class Student
{
private:
	ll point[5];
	ll sum = 0;
public:
	// read 5 on students
	void input(void)
	{
		for (int i = 0; i < 5; ++i)
		{
			cin>>this->point[i];
		}
	}

	// Calculate the total of 5 student points
	int calculateTotalScore()
	{
		for (int i = 0; i < 5; ++i)
		{
			/* code */
			sum+= this->point[i];
		}
		return sum;
	}
};

int main()
{
	ll n;
	cout<<"wirte Student numbers: "; cin>>n;
	Student *s = new Student[n];

	// Enter each grade of a student
	for (int i = 0; i < n; ++i)
	{
		s[i].input();
	}

	ll Ngoc_point = s[0].calculateTotalScore();

	// // determine how many students scored higher than Ngoc
	int count = 0;
	for (int i = 1; i < n; ++i)
	{
		int point = s[i].calculateTotalScore();
		if (point > Ngoc_point)
		{
			count++;
		}
	}

	cout<<"Number of people scoring higher Ngoc: ";
	cout<<count<<endl;
	return 0;
}		

