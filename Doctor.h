#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include"Staff.h"
#include"Patient.h"
#include"Person.h"
using namespace std;

class Doctor:public Staff
{
protected:
	
	float docexperince;
	int workingHours;
	int patientscheck;
	const float fixedrate = 1000;
	Patient *p;
	double Totalincome = 0;

public:
	
	void setpatientscheck(int ch)
	{
		patientscheck = ch;
	}
	int getpatientscheck()
	{
		return patientscheck;
	}
	void setdocexperience(float f)
	{
		docexperince = f;
	}
	float getdocexperience()
	{
		return docexperince;
	}
	void setworkingHours(int wh)
	{
		workingHours = wh;
	}
	int getworkingHours()
	{
		return workingHours;
	}
	void setTotalincome(double Ti)
	{
		Totalincome = Ti;
	}
	double getTotalincome()
	{
		return Totalincome;
	}
	Doctor()
	{
		docexperince = 0;
		workingHours = 0;
		Totalincome = 0;
	}
	Doctor(float f,int wh,double Ti, string j, string e, string c, string l, string fn, string ln, int a, string g, string dob, long int pn, string ha, string co,Patient *p1):Staff(j,e,c,l,fn,ln,a,g,dob,pn,ha,co)
	{
		
		docexperince = f;
		workingHours = wh;
		Totalincome = Ti;
		p = p1;
	}
	void salary()
	{
		if (workingHours <= 300)
		{
			Totalincome = workingHours * fixedrate;
			cout << "Total income: " << Totalincome << endl;
		}
		else if (workingHours > 300)
		{
			Totalincome = workingHours * fixedrate;
			cout << "Total income: " << Totalincome << endl;
		}
	}
	int count()
	{
		int totalDoctor;
		in.open("Doctor.txt", ios::app);
		in >> totalDoctor;
		if (totalDoctor < 0)
		{
			totalDoctor = 0;
		}
		in.close();
		return totalDoctor;
	}
	Doctor *readdata()
	{
		
		Doctor *doc=new Doctor,e;
		int total = 0;
		in.open("Doctor.txt");
		if (in.is_open())
		{
			in >> total;
			cout << "number of doctors " << total << endl;
			doc = new Doctor[total];
			in.ignore();
			for (int i = 0; i < total; i++)
			{
				in >> firstName;//Person
				in >> lastName;
				in >> age;
				in >> gender;
				in >> dateofbirth;
				in >> phoneNumber;
				in >> homeaddress;
				in >> CNIC;//Person

				
				in >> docexperince;//doc
				in >> workingHours;//doc

				in >> joiningdate;//staff
				in >> education;//staff
				in>>certification;//staff
				in >> language;//staff
				in >> patientscheck;
			
				doc[i].setfirstName(firstName);
				doc[i].setlastName(lastName);
				doc[i].setage(age);
				doc[i].setgender(gender);
				doc[i].setdateofbirth(dateofbirth);
				doc[i].setphoneNumber(phoneNumber);
				doc[i].sethomeaddress(homeaddress);
				doc[i].setCNIC(CNIC);

				
				doc[i].setdocexperience(docexperince);
				doc[i].setworkingHours(workingHours);

				doc[i].setjoiningdate(joiningdate);
				doc[i].seteducation(education);
				doc[i].setcertification(certification);
				doc[i].setlanguage(language);
				/*Registeration *r = new Registeration, rc;
				rc.count();
				r = new Registeration[rc.count()];
				r = rc.readdata();
				int totalDoctor = 0;
				for (int k = 0; k < rc.count(); k++)
				{
					if (r[i].getDoctorfirstname() == d[i].getfirstName())
					{
						totalDoctor++;
					}
				}*/

				doc[i].setpatientscheck(patientscheck);
			}

		}
		else cout << "ERROR" << endl;
		in.close();
		return doc;
	}
	void writedata()
	{
		out.open("Doctor.txt", ios::app);
		out << firstName << endl;
		out << lastName << endl;
		out << age << endl;
		out << gender << endl;
		out << dateofbirth << endl;
		out << phoneNumber << endl;
		out << homeaddress << endl;
		out << CNIC << endl;

		
		out << docexperince << endl;
		out << workingHours << endl;
		//out << Totalincome << endl;

		out << joiningdate << endl;
		out << education << endl;
		out << certification << endl;
		out << language << endl;
		out << patientscheck << endl;

		out.close();
	}
	void addDoctor()
	{

		Doctor d1;
		cout << "\t\tEnter the data of new doctor." << endl;
		cout << " First name: ";
		cin >> firstName;
		cout << " Last name: ";
		cin >> lastName;
		cout << "Age: ";
		cin >> age;
		cout << "Gender: ";
		cin >> gender;
		cout << "Date of birth: ";
		cin >> dateofbirth;
		cout << "Phone number: ";
		cin >> phoneNumber;
		cout << "Home address: ";
		cin >> homeaddress;
		cout << "CNIC: ";
		cin >> CNIC;

		
		cout << "Doctor Experience: ";
		cin >> docexperince;
		cout << "Working Hours: ";
		cin >> workingHours;

		cout << "Joining Date: ";
		cin >> joiningdate;
		cout << "Education: ";
		cin >> education;
		cout << "Certification: ";
		cin >> certification;
		cout << "Language: ";
		cin >> language; 
		//cout << "Patients check ";
		//cin >> patientscheck;
		d1.setfirstName(firstName);
		d1.setlastName(lastName);
		d1.setage(age);;;;;
		d1.setgender(gender);
		d1.setdateofbirth(dateofbirth);
		d1.setphoneNumber(phoneNumber);
		d1.sethomeaddress(homeaddress);
		d1.setCNIC(CNIC);

		
		d1.setdocexperience(docexperince);
		d1.setworkingHours(workingHours);

		d1.setjoiningdate(joiningdate);
		d1.seteducation(education);
		d1.setcertification(certification);
		d1.setlanguage(language);
		//d1.setpatientscheck(patientscheck);
		Doctor *d2 = new Doctor, c;
		int count1 = c.count();
		d2->readdata();
		out.open("Doctor.txt");
		out << count1 + 1 << endl;
		out.close();
		for (int j = 0; j < count1; j++)
		{
			d2[j].writedata();
		}
		d1.writedata();

	}
	
};