#pragma once
#include<iostream>
#include"Department.h"
#include<string>
using namespace std;
class Hospital
{
protected:
	const string hosname="BAHRIA INTERNATIONAL HOSPITAL";
	const string location="PHASE 8 BAHRIA TOWN (PVT)LTD";
	const string contactnumber="0351 5705790";
	const string website="www.barmth.org";
	Department *d;
public:
	//default 
	string gethospitalname()
	{
		return hosname;
	 }
	string gethospitallocation()
	{
		return location;
	}
	string getcontactno()
	{
		return contactnumber;
	}
	string getwebsite()
	{
		return website;
	}
	Hospital()
	{
		d = new Department;
	}
    //parameterized constructor

	Hospital(Department *d1)
	{
		d = d1;
		
	}
	
	//aggregation with department

	~Hospital()
	{
		delete d;
	}


};