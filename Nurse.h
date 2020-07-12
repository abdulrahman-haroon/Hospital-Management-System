#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include"Staff.h"
using namespace std;
class Nurse :public Staff
{
protected:
	float workingexperience;
	int workingdaysyearly;
	int workinghour;
	double totalincome;
	const float fixedrate = 1500;
public:
	void setworkingexperience(float e)
	{
		workingexperience = e;
	}
	float getworkigexperience()
	{
		return workingexperience;
	}
	void setworkingdaysyearly(int h)
	{
		workingdaysyearly = h;
	}
	int getworkingdaysyearly()
	{
		return workingdaysyearly;
	}
	void settotalincome(double i)
	{
		totalincome = i;
	}
	double gettotalincome()
	{
		return totalincome;
	}
	void setworkinghour(int hr)
	{
		workinghour = hr;
	}
	int getworkinghour()
	{
		return workinghour;
	}
	Nurse()
	{
		workingexperience = 0;
		workingdaysyearly = 0;
		totalincome = 0.0;
		workinghour = 0;
	}
	Nurse(float we ,int w,float t, int wh,string j, string e, string c, string l, string fn, string ln, int a, string g, string dob, long int pn, string ha, string co) :Staff(j, e, c, l, fn, ln, a, g, dob, pn, ha, co)
	{
		workingexperience = we;
		workingdaysyearly = w;
		totalincome = t;
		workinghour = wh;
	}

	int count()
	{
		int totalNurse;
		in.open("Nurse.txt", ios::app);
		in >> totalNurse;
		if (totalNurse < 0)
		{
			totalNurse = 0;
		}
		in.close();
		return totalNurse;
	}

Nurse *readdata()
{
	//reading Nurse
	Nurse *n = new Nurse;
	int total = 0;
	in.open("Nurse.txt");
	if (in.is_open())
	{
		in >> total;
		n = new Nurse[total];
		in.ignore();
		for (int i = 0; i < total; i++)
		{
			//Person
			in >> firstName;
			in >> lastName;
			in >> age;
			in >> gender;
			in >> dateofbirth;
			in >> phoneNumber;
			in >> homeaddress;
			in >> CNIC;

			//Person
			n[i].setfirstName(firstName);
			n[i].setlastName(lastName);
			n[i].setage(age);
			n[i].setgender(gender);
			n[i].setdateofbirth(dateofbirth);
			n[i].setphoneNumber(phoneNumber);
			n[i].sethomeaddress(homeaddress);
			n[i].setCNIC(CNIC);

			
			//staff
			in >> joiningdate;
			in >> education;
			in >> certification;
			in >> language;
					
			//staff
			n[i].setjoiningdate(joiningdate);
			n[i].seteducation(education);
			n[i].setcertification(certification);
			n[i].setlanguage(language);

			//Nurse
			in >> workingexperience;
			in >> workingdaysyearly;
			
			in >> workinghour;

			//Nurse

			n[i].setworkingexperience(workingexperience);
			n[i].setworkingdaysyearly(workingdaysyearly);
			
			n[i].setworkinghour(workinghour);
		}

	}
	else cout << "ERROR" << endl;
	in.close();
	return n;
}
void writedata()
{
	out.open("Nurse.txt", ios::app);

	//person

	out << firstName << endl;
	out << lastName << endl;
	out << age << endl;
	out << gender << endl;
	out << dateofbirth << endl;
	out << phoneNumber << endl;
	out << homeaddress << endl;
	out << CNIC << endl;

	//staff

	out << joiningdate << endl;
	out << education << endl;
	out << certification << endl;
	out << language << endl;
	
    //Nurse

	out << workingexperience << endl;
	out << workingdaysyearly << endl;
	out << workinghour;
	out.close();
}
void addNurse()
{
	Nurse n1;
	
	//person

	cout << " First name ";
	cin >> firstName;
	cout << " Last name ";
	cin >> lastName;
	cout << " AGE ";
	cin >> age;
	cout << " Gender ";
	cin >> gender;
	cout << " Date of birth ";
	cin >> dateofbirth;
	cout << " Phone number ";
	cin >> phoneNumber;
	cout << " Home address ";
	cin >> homeaddress;
	cout << " CNIC ";
	cin >> CNIC;

	//person

	n1.setfirstName(firstName);
	n1.setlastName(lastName);
	n1.setage(age);
	n1.setgender(gender);
	n1.setdateofbirth(dateofbirth);
	n1.setphoneNumber(phoneNumber);
	n1.sethomeaddress(homeaddress);
	n1.setCNIC(CNIC);

	//staff

	cout << "Joining Date ";
	cin >> joiningdate;
	cout << "Education ";
	cin >> education;
	cout << "Certification ";
	cin >> certification;
	cout << "Language ";
	cin >> language;

	//staff

	n1.setjoiningdate(joiningdate);
	n1.seteducation(education);
	n1.setcertification(certification);
	n1.setlanguage(language);

	//Nurse

	cout << "Working Experience: ";
	cin >> workingexperience;
	cout << "Working Day Yearly: ";
	cin >> workingdaysyearly;
	
	cout << "Working Hours:";
	cin >> workinghour;

	//Nurse

	n1.setworkingexperience(workingexperience);
	n1.setworkingdaysyearly(workingdaysyearly);
	
	n1.setworkinghour(workinghour);

	Nurse *n2 = new Nurse, c;
	int count1 = c.count();
	n2->readdata();
	out.open("Nurse.txt");
	out << count1 + 1 << endl;
	out.close();
	for (int j = 0; j < count1; j++)
	{
		n2[j].writedata();
	}
	n1.writedata();

}
void salary()
{
	if (workingdaysyearly <= 365)
	{
		totalincome =(365-workingdaysyearly)* (workinghour * fixedrate)/12;
		cout << "TOTAL INCOME:" << totalincome << endl;
	}
	else if (workingdaysyearly>365)
	{
		totalincome = (365-workingdaysyearly) *(workinghour* fixedrate)/12;
		cout << "TOTAL INCOME:" << totalincome << endl;
	}
}
};