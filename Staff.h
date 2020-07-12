#pragma once
#include<iostream>
#include<string>
#include"Person.h"
#include"Department.h"
using namespace std;
class Staff:public Person
{
protected:
	string joiningdate;
	string education;
	string certification; 
	string language;
	
public:
	void setjoiningdate(string j)
	{
		joiningdate = j;
	}
	string getjoiningdate()
	{
		return joiningdate;
	}
	void seteducation(string e)
	{
		education = e;
	}
	string geteducation()
	{
		return education;
	}
	void setcertification(string c)
	{
		certification = c;
	}
	string getcertifcation()
	{
		return certification;
	}
	void setlanguage(string l)
	{
		language = l;
	}
	string getlanguage()
	{
		return language;
	}
	Staff()
	{
		joiningdate="0";
		education = "0";
		certification = "0";
		language = "0";
	}
	Staff(string j, string e, string c, string l,string fn, string ln, int a, string g, string dob, long int pn, string ha, string co):Person(fn,ln,a,g,dob,pn,ha,co)
	{
		joiningdate = j;
		education = e;
		certification = c;
		language = l;
	}
	


};