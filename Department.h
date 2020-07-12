#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include"Staff.h"
using namespace std;

class Department
{
protected:
	string depname;
	int floor;
	Staff *s;
public:
	void setdepname(string d)
	{
		depname = d;
	}
	string getdepname()
	{
		return depname;
	}
	void setfloor(int f)
	{
		floor = f;
	}
	int getfloor()
	{
		return floor;

	}
	Department()
	{
		depname = "0";
		floor = 0;
	}
	Department(string d, int f, Staff *s1)
	{
		depname = d;
		floor = f;
		s = s1;
	}
	int count()
	{
		int totalDepartment=0;
		in.open("Department.txt", ios::app);
		in >> totalDepartment;
		if (totalDepartment < 0)
		{
			totalDepartment = 0;
		}
		in.close();
		return totalDepartment;
	}
	Department *readdata()
	{
		Department *de = new Department;
		int total = 0;

		in.open("Department.txt");
		if (in.is_open())
		{
			in >> total;
			de = new Department[total];
			in.ignore();
			for (int i = 0; i < total; i++)
			{
				//staff
				in >> depname;
				in >> floor;
				//staff
				de[i].setdepname(depname);
				de[i].setfloor(floor);
			}
		}
		else cout << "ERROR" << endl;
		in.close();
		return de;
	}

void writedata()
{
		out.open("Department.txt", ios::app);
		out << depname<<endl;
		out << floor << endl;
		out.close();
}
void addDepartment()
{

	Department de1;
	cout << " Department Name: ";
	cin >> depname;
	cout << " Department Floor: ";
	cin >> floor;

	de1.setdepname(depname);
	de1.setfloor(floor);

	Department *de2 = new Department, c;
	int count1 = c.count();
	de2->readdata();
	out.open("Department.txt");
	out << count1 + 1 << endl;
	out.close();
	
	for (int j = 0; j < count1; j++)
	{
		de2[j].writedata();
	}
	de1.writedata();

}
};