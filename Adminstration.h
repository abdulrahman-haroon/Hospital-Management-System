#pragma once
#include<iostream>
#include<string>
using namespace std;
#include"Patient.h"
#include"Registeration.h"
#include"Department.h"
#include"Hospital.h"
#include"Doctor.h"
#include"Staff.h"
#include"Nurse.h"
class Adminstration {
protected:
	Registeration *p;
public:
	void addPatient()
	{
		Registeration add;
		add.addpatient();
		
	}
	
	void deletepatient()
	{
		string fname, lname;
		Registeration *ca=new Registeration,c;
		ca->readdata();
		cout << "Enter Patient First Name: ";
		cin >> fname;
		cout << "Enter Patient Last Name: ";
		cin >> lname;
		int total = c.count();
		out.open("Patient.txt");
		out.close();
		bool b = false;
		for (int i = 0; i < total; i++) 
		{
			if (ca[i].getfirstName() == fname&&ca[i].getlastName() == lname)
			{
				b = true;
				cout << "\t\tRecord found!!" << endl;
				ca[i].setfirstName("0");
				
				cout << "\t\tPatient deleted!!" << endl;
			}
			
			
		}
		if (b == false)
		{
		 cout << "Record not found" << endl;
		}
		for (int j = 0; j < total; j++)
		{
			if (ca[j].getfirstName() != "0")
			{
				ca[j].writedata();
			}
		}
	}
	void searchPatient()
	{
		string fname, lname;
		Registeration *ca = new Registeration, c;
		ca = c.readdata();
		cout << "Enter patient first name: ";
		cin >> fname;
		cout << "Enter patient last name: ";
		cin >> lname;
		int total = c.count();
		bool b = false;
		for (int i = 0; i < total; i++)
		{
			if (ca[i].getfirstName() == fname&&ca[i].getlastName() == lname)
			{
				b = true;
				cout << "\t\tRecord found!!!!!!" << endl;
				cout <<"First Name:" <<ca[i].getfirstName() << endl;
				cout <<"Last Name: " <<ca[i].getlastName() << endl;
				cout <<"Age: " <<ca[i].getage() << endl;
				cout <<"Gender: " <<ca[i].getgender() << endl;
				cout <<"Date of birth: " <<ca[i].getdateofbirth() << endl;
				cout <<"Phone Number: " <<ca[i].getphoneNumber() << endl;
				cout <<"Home Address: " <<ca[i].gethomeaddress() << endl;
				cout <<"CNIC: " <<ca[i].getCNIC() << endl;
				cout <<"ID: " <<ca[i].getid() << endl;
				cout <<"Sickness: " <<ca[i].getsickness() << endl;
				cout <<"Allergies: " <<ca[i].getallergies() << endl;
				cout <<"Accepted Date: " <<ca[i].getacceptedDate() << endl;
			}
		}
		if (b == false)
		{
		 cout << "Record not found" << endl;
		 
		}
	}
	void adddoctor()
	{
		Doctor add;
		add.addDoctor();
	}
	void deleteDoctor()
	{
		string fname, lname;
		Doctor *ca = new Doctor, c;
		ca->readdata();
		cout << "Enter Doctor First Name: ";
		cin >> fname;
		cout << "Enter Doctor Last Name: ";
		cin >> lname;
		int total = c.count();
		out.open("Doctor.txt");
		out.close();
		bool b = false;
		for (int i = 0; i < total; i++)
		{
			if (ca[i].getfirstName() == fname&&ca[i].getlastName() == lname)
			{
				b = true;
				cout << "\t\tRecord found!!" << endl;
				ca[i].setfirstName("0");

				cout << "\t\tDoctor deleted!!" << endl;
			}
			

		}
		if (b == false)
		{
		 cout << "\t\tRecord not found!!" << endl;
		}
		for (int j = 0; j < total; j++)
		{
			if (ca[j].getfirstName() != "0")
			{
				ca[j].writedata();
			}
		}
	}
	void searchdoctor()
	{
		string fname, lname;
		Doctor *ca = new Doctor, c;
		ca = c.readdata();
		cout << "Enter Doctor First Name: ";
		cin >> fname;
		cout << "Enter Doctor Last Name: ";
		cin >> lname;
		int total = c.count();
		bool b = false;
		for (int i = 0; i < total; i++)
		{
			if (ca[i].getfirstName() == fname&&ca[i].getlastName() == lname)
			{
				b = true;

				cout << "\t\tRecord found!!" << endl;
				cout <<"First Name: " <<ca[i].getfirstName() << endl;
				cout <<"Last Name: " <<ca[i].getlastName() << endl;

				cout <<"Age: " <<ca[i].getage()<<endl;
				cout <<"Gender: " <<ca[i].getgender() << endl;
				cout <<"Date of birth: " <<ca[i].getdateofbirth() << endl;
				cout <<"Phone Number: " <<ca[i].getphoneNumber() << endl;
				cout <<"Home Address:" <<ca[i].gethomeaddress() << endl;
				cout <<"CNIC: " <<ca[i].getCNIC() << endl;
				cout <<"Doctor Experience: " <<ca[i].getdocexperience() << endl;
				cout <<"Working Hours: " <<ca[i].getworkingHours() << endl;
				cout <<"Joining Date: " <<ca[i].getjoiningdate() << endl;
				cout <<"Education: " <<ca[i].geteducation() << endl;
				cout <<"Certification:" <<ca[i].getcertifcation() << endl;
				cout <<"Language: " <<ca[i].getlanguage() << endl;
			}
			

		}
		if (b == false)
		{
		 cout << "\t\tRecord not found!" << endl;
		}
	}
	void calculatesalary()
	{
		string fname, lname;
		Doctor *ca = new Doctor, c;
		ca = c.readdata();
		cout << "Enter Doctor First Name: ";
		cin >> fname;
		cout << "Enter Doctor Last Name: ";
		cin >> lname;
		int total = c.count();
		bool b = false;
		for (int i = 0; i < total; i++)
		{
			if (ca[i].getfirstName() == fname&&ca[i].getlastName() == lname)
			{
				b = true;
				cout << "\t\tRecord found!!" << endl;
				int hours=ca[i].getworkingHours();
				ca[i].salary();
			}
			
		}
		if (b == false)
		{
		 cout << "\t\tRecord not found!!" << endl;
		}
		
	}
	void addNurse()
	{
		Nurse add;
		add.addNurse();
	}
	void deleteNurse()
	{
		string fname, lname;
		Nurse *ca = new Nurse, c;
		ca->readdata();
		cout << "Enter Nurse First Name: ";
		cin >> fname;
		cout << "Enter Nurse Last Name: ";
		cin >> lname;
		int total = c.count();
		out.open("Nurse.txt");
		out.close();
		bool b = false;
		for (int i = 0; i < total; i++)
		{
			if (ca[i].getfirstName() == fname&&ca[i].getlastName() == lname)
			{
				b = true;
				cout << "\t\tRecord found!!" << endl;
				ca[i].setfirstName("0");

				cout << "\t\tNurse deleted!!" << endl;
			}
			
		}
		if (b == false)
		{
		 cout << "\t\tRecord not found!" << endl;
		}
		for (int j = 0; j < total; j++)
		{
			if (ca[j].getfirstName() != "0")
			{
				ca[j].writedata();
			}
		}
	}
	void searchNurse()
	{
		string fname, lname;
		Nurse *ca = new Nurse, c;
		ca = c.readdata();
		cout << "Enter Nurse First Name: ";
		cin >> fname;
		cout << "Enter Nurse Last Name: ";
		cin >> lname;
		int total = c.count();
		bool b = false;
		for (int i = 0; i < total; i++)
		{
			if (ca[i].getfirstName() == fname&&ca[i].getlastName() == lname)
			{
				b = true;
				cout << "\t\tRecord found!!" << endl;
				cout <<"First Name: " <<ca[i].getfirstName() << endl;
				cout <<"Last Name: " <<ca[i].getlastName() << endl;

				cout <<"Age: " <<ca[i].getage() << endl;
				cout <<"Gender: " <<ca[i].getgender() << endl;
				cout <<"Date Of Birth: " <<ca[i].getdateofbirth() << endl;
				cout <<"Phone Number: " <<ca[i].getphoneNumber() << endl;
				cout <<"Home Address: " <<ca[i].gethomeaddress() << endl;
				cout << "CNIC: " << ca[i].getCNIC() << endl;
				
				cout <<"Joining Date: " <<ca[i].getjoiningdate() << endl;
				cout <<"Education: " <<ca[i].geteducation() << endl;
				cout <<"Certification: " <<ca[i].getcertifcation() << endl;
				cout <<"Language: " <<ca[i].getlanguage() << endl;

				cout <<"Working Experience: " <<ca[i].getworkigexperience() << endl;
				cout <<"Working days yearly: " <<ca[i].getworkingdaysyearly() << endl;
				cout <<"Wokring Hour: " <<ca[i].getworkinghour() << endl;
			}
			

		}
		if (b == false)
		{
	    cout << "\t\tRecord not found!!" << endl;
		}
	}
	void calculateNursesalary()
	{
		string fname, lname;
		Nurse *ca = new Nurse, c;
		ca = c.readdata();
		cout << "Enter Nurse First Name: ";
		cin >> fname;
		cout << "Enter Nurse Last Name: ";
		cin >> lname;
		int total = c.count();
		bool b = false;
		for (int i = 0; i < total; i++)
		{
			if (ca[i].getfirstName() == fname&&ca[i].getlastName() == lname)
			{
				b = true;
				cout << "\t\tRecord found!!" << endl;
				
				ca[i].salary();
			}

		}
		if (b == false)
		{
			cout << "\t\tRecord not found!!" << endl;
		}
	}
	void adddepartment()
	{
		Department add;
		add.addDepartment();

	}
	void deletedepartment()
	{
		string depname, lname;
		Department *ca = new Department, c;
		ca->readdata();
		cout << "Enter Department Name: ";
		cin >> depname;
		
		int total = c.count();
		out.open("Department.txt");
		out.close();
		bool b = false;
		for (int i = 0; i < total; i++)
		{
			if (ca[i].getdepname() == depname)
			{
				b = true;
				cout << "\t\tRecord found!!" << endl;
				ca[i].setdepname("0");

				cout << "\t\tDepartment deleted!!" << endl;
			}

		}
		if (b == false)
		{
			cout << "\t\tRecord not found!" << endl;
		}
		for (int j = 0; j < total; j++)
		{
			if (ca[j].getdepname() != "0")
			{
				ca[j].writedata();
			}
		}
	}
	void searchdepartment()
	{
		string depname, lname;
		Department *ca = new Department, c;
		ca = c.readdata();
		cout << "Enter Department Name: ";
		cin >> depname;
		
		int total = c.count();
		bool b = false;
		for (int i = 0; i < total; i++)
		{
			if (ca[i].getdepname() == depname)
			{
				b = true;
				cout << "\t\tRecord found!!" << endl;
				cout <<"Departmen Name: "<< ca[i].getdepname() << endl;
				cout <<"Floor: "<< ca[i].getfloor() << endl;

				
			}


		}
		if (b == false)
		{
			cout << "\t\tRecord not found!!" << endl;
		}
	}
};
