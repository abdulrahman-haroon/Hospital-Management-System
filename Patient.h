#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include"Person.h"
using namespace std;
ifstream in;
ofstream out;
class Patient :public Person
{
protected:
	string id;
	string sickness;
	string allergies;
	string acceptedDate;
	friend class Doctor;
public:
	void setid(string i)
	{
		id = i;
	}
	string getid()
	{
		return this->id;
	}
	void setsickness(string s)
	{
		sickness = s;
	}
	string getsickness()
	{
		return this->sickness;
	}
	void setallergies(string al)
	{
		allergies = al;
	}
	string getallergies()
	{
		return this->allergies;
	}
	void setacceptedDate(string ad)
	{
		acceptedDate = ad;
	}
	string getacceptedDate()
	{
		return this->acceptedDate;
	}
	Patient()
	{
		id = "N/A";
		sickness = "N/A";
		allergies = "N/A";
		acceptedDate = "N/A";
	}
	Patient(string i, string s, string p, string al, string sr, string ad, string fn, string ln, int a, string g, string dob, long int pn, string ha, string c) :Person(fn, ln, a, g, dob, pn, ha, c)
	{
		id = i;
		sickness = s;
		allergies = al;
		acceptedDate = ad;
	}
};