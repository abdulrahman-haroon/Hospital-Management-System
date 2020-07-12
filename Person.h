#pragma once
#include<iostream>
#include<string>
using namespace std;
class Person
{
protected:
	string firstName;
	string lastName;
	int age;
	string gender;
	string dateofbirth;
	unsigned long long int phoneNumber;
	string homeaddress;
	string CNIC;
public:
	void setfirstName(string fn)
	{
		firstName = fn;
	}
	string getfirstName()
	{
		return this->firstName;
	}
	void setlastName(string ln)
	{
		lastName = ln;
	}
	string getlastName()
	{
		return this->lastName;
	}
	void setage(int a)
	{
		age = a;
	}
	int getage()
	{
		return this->age;
	}
	void setgender(string g)
	{
		gender = g;
	}
	string getgender()
	{
		return this->gender;
	}
	void setdateofbirth(string dob)
	{
		dateofbirth = dob;
	}
	string getdateofbirth()
	{
		return this->dateofbirth;
	}
	void setphoneNumber(unsigned long long int pn)
	{
		phoneNumber = pn;
	}
	unsigned long long int getphoneNumber()
	{
		return this->phoneNumber;
	}
	void sethomeaddress(string ha)
	{
		homeaddress = ha;
	}
	string gethomeaddress()
	{
		return this->homeaddress;
	}
	void setCNIC(string c)
	{
		CNIC = c;
	}
	string getCNIC()
	{
		return this->CNIC;
	}
	Person()
	{
		firstName = "N/A";
		lastName = "N/A";
		age = 0;
		gender = "N/A";
		dateofbirth = "N/A";
		phoneNumber = 0;
		homeaddress = "N/A";
		CNIC = "N/A";
	}
	Person(string fn, string ln, int a, string g, string dob, unsigned long long int pn, string ha, string c)
	{
		firstName = fn;
		lastName = ln;
		age = a;
		gender = g;
		dateofbirth = dob;
		phoneNumber = pn;
		homeaddress = ha;
		CNIC = c;
	}
	
};