#include<iostream>
using namespace std;
class student
{
	public:
	char name[20];
	int enroll no,m1,m2,m3;
	void putdata()
{
	cout<<"enter enrollment no.:";
	cin>>enrllment;
	cout<<"enter name.";
	cin>>name;
	cout<<"enter marks of maths :"<<endl;
	cin>>m1
	cout<<"enter marks of OOP"<<endl;
	cin>>m2;
	cout<<"enter marks of english"<<endl;
	cin>>m3;
	}
	void getdata()
	{
	int total,per;
	total=m1+m2+m3;
	per=(((total)*100)/300);
	cout<<"percentage of student is :"<<per<<endl;
	}
	};
	int main()
	{
	student obj;
	obj.putdata();
	obj.getdata();
	return 0;
	}
