/*
vd:
Box b1; // Should set b1.l = b1.b = b1.h = 0;
Box b2(2, 3, 4); // Should set b1.l = 2, b1.b = 3, b1.h = 4;
b2.getLength();	// Should return 2
b2.getBreadth(); // Should return 3
b2.getheight();	// Should return 4
b2.CalculateVolume(); // Should return 24
bool x = (b1 < b2);	// Should return true based on the conditions given
cout<<b2; // Should print 2 3 4 in order.
*/
#include<bits/stdc++.h>

using namespace std;

//Implement the class Box 
class Box
{
private:
//l,b,h are integers representing the dimensions of the box
	int l = 0;
	int b = 0;
	int h = 0;

public:
	
	// Box();
	Box(){}

	// Box(int,int,int);
	Box(int lenght,int width,int height)
	{
		l = lenght;
		b = width;
		h = height;
	}

	// Box(Box);
	Box(Box &x)
	{
		l = x.l;
		b = x.b;
		h = x.h;
	}

	// int getLength(); // Return box's length
	int getLength()
	{
		return l;
	}
	
	// int getBreadth (); // Return box's breadth
	int getBreadth ()
	{
		return b;
	}

	// int getHeight ();  //Return box's height
	int getHeight ()
	{
		return h;
	}

	// long long CalculateVolume(); // Return the volume of the box
	long long CalculateVolume()
	{
		return (long long)l*b*h;
	}

	//Overload operator < as specified
	//bool operator<(Box& b)
	bool operator<(Box& x)
	{
		if(l<x.l)
		{
			return true;
		}else if(b< x.b && l == x.l)
		{
			return true;
		}else if(h<x.h && b == x.b && l == x.l)
		{
			return true;
		}else
		{
			return false;
		}
	}
	//Overload operator << as specified
	//ostream& operator<<(ostream& out, Box& B)
	friend ostream& operator<<(ostream& out,Box &B)
	{
		out<<B.l<<" "<<B.b<<" "<<B.h;
		return out;
	}

};

void check2()
{
	int n;
	cout<<"Enter size:";
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cout<<"Enter type:";
		cin>>type;
		
		if(type ==1)
		{
			cout<<temp<<endl;
		}

		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}

		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n"; // be hon
			}
			else
			{
				cout<<"Greater\n";// lon hon
			}
		}

		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}

