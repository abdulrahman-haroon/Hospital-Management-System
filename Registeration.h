#pragma once
#include<iostream>
#include<string>
using namespace std;
#include"Patient.h"
#include"Rooms.h"
#include"Hospital.h"
#include"Doctor.h"
class Registeration : public Patient
{
protected:
	string OPD;
	string Emergency;
	string Doctorfirstname;
	string Doctorlastname;
	Rooms *room;
	Hospital h;
	Doctor *d;
public:
	void setDoctorfirstname(string dfn)
	{
		Doctorfirstname = dfn;
	}
	string getDoctorfirstname()
	{
		return Doctorfirstname;
	}
	void setDoctorlastname(string dln)
	{
		Doctorlastname = dln;
	}
	string getDoctorlastname()
	{
		return Doctorlastname;
	}
	void setOPD(string o)
	{
		OPD = o;
	}
	string getOPD()
	{
		return OPD;
	}
	void setEmergency(string e)
	{
		Emergency = e;
	}
	string getEmergency()
	{
		return this->Emergency;
	}
	Registeration()
	{
		OPD = "N/A";
		Emergency = "N/A";
	}
	Registeration(Rooms *roo, string o, string e, string i, string s, string p, string al, string sr, string ad, string fn, string ln, int a, string g, string dob, long int pn, string ha, string c) :Patient(i, s, p, al, sr, ad, fn, ln, a, g, dob, pn, ha, c)
	{
		room = roo;
		OPD = o;
		Emergency = e;
	}
	int count()
	{
		int totalPatient;
		in.open("Patient.txt", ios::app);
		in >> totalPatient;
		if (totalPatient < 0)
		{
			totalPatient = 0;
		}
		in.close();
		return totalPatient;
	}
	Registeration *readdata()
	{
		
		Registeration *p = new Registeration;
		int total = 0;
		in.open("Patient.txt");
		if (in.is_open())
		{

			in >> total;
			
			p = new Registeration[total];
			in.ignore();
			for (int i = 0; i < total; i++)
			{
				in >> firstName;
				in >> lastName;
				in >> age;
				in >> gender;
				in >> dateofbirth;
				in >> phoneNumber;
				in >> homeaddress;
				in >> CNIC;
				in >> id;
				in >> sickness;
				in >> allergies;
				in >> acceptedDate;
				in >> Doctorfirstname;
				in >> Doctorlastname;
				p[i].setfirstName(firstName);
				p[i].setlastName(lastName);
				p[i].setage(age);
				p[i].setgender(gender);
				p[i].setdateofbirth(dateofbirth);
				p[i].setphoneNumber(phoneNumber);
				p[i].sethomeaddress(homeaddress);
				p[i].setCNIC(CNIC);
				p[i].setid(id);
				p[i].setsickness(sickness);
				p[i].setallergies(allergies);
				p[i].setacceptedDate(acceptedDate);
				//p[i].setDoctorfirstname(Doctorfirstname);;;;;;;
				//p[i].setDoctorlastname(Doctorlastname);
			}

		}
		else cout << "ERROR" << endl;
		in.close();
		return p;
	}
	/*void displayPatient()
	{
		cout << "First Name:" << firstName << endl;
		cout << "Last Name:" << lastName << endl;
		cout << "Age:" << age << endl;
		cout << "Gender:" << gender<< endl;
		cout << "Date Of Birth:" << firstName << endl;
		cout << "Phone Number:" << phoneNumber << endl;
		cout << "Home Address:" << homeaddress << endl;
		cout << "CNIC:" << CNIC << endl;
		cout << "ID:" << id << endl;
		cout << "Sickness:" << sickness << endl;
		cout << "Allergies:" << allergies << endl;
		cout << "Accepted Datee:" << acceptedDate << endl;

	}*/
	void writedata()
	{
		out.open("Patient.txt", ios::app);
		out << firstName << endl;
		out << lastName << endl;
		out << age << endl;
		out << gender << endl;
		out << dateofbirth << endl;
		out << phoneNumber << endl;
		out << homeaddress << endl;
		out << CNIC << endl;
		out << id << endl;
		out << sickness << endl;
		out << allergies << endl;
		out << acceptedDate << endl;
		//out << Doctorfirstname << endl;
		//out << Doctorlastname << endl;
		out.close();
	}
	void payslip()
	{
		int floor, no;
		Registeration r;
		string option;
		cout << "Press E for Emergency O for OPD: ";
		cin >> option;
		if (option == "e" || option == "E")
		{
			r.setEmergency(option);
			r.setOPD("0");
		}
		else {
			r.setOPD(option);
			r.setEmergency("0");
		}
		if (option == "e" || option == "E")
		{
			Rooms c;
			int total = c.count();
			room = c.readdata();
			/*for (int i = 0; i < c.count(); i++)
			{
				cout<<room[i].getfloor() << endl;
				cout<<room[i].gettotalrooms() << endl;
				cout << room[i].getoccupiedrooms() << endl;
				cout << room[i].getroomNumber() << endl;

			}*/
			out.open("Rooms.txt");
			out.close();
			for (int l = 0; l < total; l++)
			{
				if (room[l].getroomNumber() < room[l].gettotalrooms())
				{
					 floor= room[l].getfloor() ;
					 no=room[l].getroomNumber() ;
					int occupy = room[l].getoccupiedrooms() + 1;
					room[l].setoccupiedrooms(occupy);
					break;
				}

			}
			for (int r = 0; r < total; r++)
			{
				room[r].writedata();
			}
		}
		string fname, lname;
		Doctor *ca = new Doctor, c;
		ca = c.readdata();
		mark:cout << "Enter Doctor First Name: ";
		cin >> fname;
		cout << "Enter Doctor Last Name: ";
		cin >> lname;
		int total = c.count();
		bool b = false;
		for (int h = 0; h < total; h++)
		{
			cout << ca[h].getfirstName() << " " << ca[h].getlastName() << endl;
		}
		for (int i = 0; i < total; i++)
		{
			if (ca[i].getfirstName() == fname&&ca[i].getlastName() == lname)
			{
				b = true;
				//ca[i].setpatientscheck(ca[i].getpatientscheck() + 1);////*****
				cout << "\t\tRecord found!!" << endl;
				//cout << ca[i].getfirstName() << endl;
				//cout << ca[i].getlastName() << endl;
			}
		}
		/*if (b == true)
		{
			out.open("Doctor.txt");
			out.close();
			for (int h = 0; h < total; h++)
			{
				ca[h].writedata();
			}
		}*/
		if (b == false)
		{
			cout << "Doctor Not Found: "<<endl;
			goto mark;
		}
		system("cls");
		cout << "\t\t\t\t\t" << h.gethospitalname() << "			Date: " << getacceptedDate()<< endl;
		cout <<"\t\t\t\t\t" <<h.gethospitallocation() << endl;
		cout << "\t\t\t\t\t\t"<<h.getwebsite() << endl;
		cout << "\t\t\t\t\t\t"<<h.getcontactno() << endl;
		cout << "--------------------------------------------------------------------------------------------------------------" << endl;
		cout << "						Service Bill						" << endl;
		cout << "--------------------------------------------------------------------------------------------------------------" << endl;
		cout << endl;
		cout << endl;
		cout << "Patient Name: " << getfirstName() << " " << getlastName()<< endl;
		cout << "\t\t\t\t\t\t\t\t\tID:" << getid() << endl;
		cout << "ADDRESS: " << gethomeaddress() << endl;
		cout << "\t\t\t\t\t\t\t\t\tAGE: " << getage() << endl;
		cout << endl;
		cout <<  "\t\t\t\t\t\t\t\t\tGender: " << getgender()<<endl;
		
		cout << "Doctor :" << fname<<" "<<lname<< endl;
		cout << endl;
		
		//cout << "AGE: " << getage() << endl;

		//cout << "Gender: " << getgender() << endl;
		//cout << "Date: " << getacceptedDate() << endl;
		//cout << "ID:" << getid() << endl;

		if (option == "e" || option == "E")
		{
			cout << endl;
			cout << "__________________________________________________________________________________________________________" << endl;
			cout << "						Emergency" << endl;
			cout << "__________________________________________________________________________________________________________" << endl;
			cout << endl;
			cout << "Floor no: " << floor << endl;
			cout << endl;
			cout << "Room no: " << no << endl;
			cout << endl;
			cout << "__________________________________________________________________________________________________________" << endl;
			cout << "Net total: " << 2000 << endl;
		}
		else
		{
			cout << endl;
			cout << "Out Patient Department(OPD)" << endl;
			cout << endl;
			cout << "___________________________________________________________________________________________________________" << endl;
			cout << "Net total: " << 1200 << endl;
		}
		cout << endl;
	}
	void addpatient()
	{
		Registeration p1;
		cout << "First name: ";
		cin >> firstName;
		cout << "Last name: ";
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
		cout << "ID: ";
		cin >> id;
		cout << "Sickness: ";
		cin >> sickness;
		cout << "Allergies: ";
		cin >> allergies;
	    cout << "Accepted date: ";
		cin >> acceptedDate;
		/*cout << "\n\nAvailable Doctors: " << endl;
		string fname, lname;
		Doctor *ca = new Doctor, cu;
		ca = cu.readdata();
	/*mark:cout << "Enter Doctor First Name: ";
		cin >> fname;
		cout << "Enter Doctor Last Name: ";
		cin >> lname;
		int totald = cu.count();
		bool b = false;
		cout << "total available doctors " <<totald<< endl;
		for (int i = 0; i < totald; i++)
		{
			cout << "hello" << endl;
			cout << ca[i].getfirstName() << " " << ca[i].getlastName() << endl;
		}
		
	mark1:	cout << "Doctor first name ";
		cin >> Doctorfirstname;
		cout << "doctor Last Name ";
        cin >> Doctorlastname;
		
		for (int i = 0; i < totald; i++)
		{
			cout << Doctorfirstname << ca[i].getfirstName() << Doctorlastname << ca[i].getlastName() << endl;
			if (Doctorfirstname == ca[i].getfirstName() && Doctorlastname == ca[i].getlastName()&&ca[i].getpatientscheck()<5)
			{
				cout << "Doctor selected " << endl;
				break;
			}
			else {
				cout << "doctor not anot available\n select another Doctor " << endl;
				goto mark1;
			}
		}*/
		p1.setfirstName(firstName);
		p1.setlastName(lastName);
		p1.setage(age);
		p1.setgender(gender);
		p1.setdateofbirth(dateofbirth);
		p1.setphoneNumber(phoneNumber);
		p1.sethomeaddress(homeaddress);
		p1.setCNIC(CNIC);
		p1.setid(id);
		p1.setsickness(sickness);
		p1.setallergies(allergies);
		p1.setacceptedDate(acceptedDate);
		//p1.setDoctorfirstname(Doctorfirstname);
		//p1.setDoctorlastname(Doctorlastname);
		/*for (int l = 0; l < cu.count(); l++)
		{
			if (Doctorfirstname == ca[l].getfirstName() && Doctorlastname == ca[l].getlastName())
			{
				ca[l].setpatientscheck(ca[l].getpatientscheck() + 1);
			}
		}
		//uapdate doctor data

		out.open("Doctor.txt");
		out.close();
		for (int h = 0; h < totald; h++)
		{
			ca[h].writedata();
		}
		delete[]ca;*/
		Registeration *p2 = new Registeration, c;
		int count1 = c.count();
		p2=c.readdata();
		out.open("Patient.txt");
		out << count1 + 1 << endl;
		out.close();
		for (int j = 0; j < count1; j++)
		{
			p2[j].writedata();
		}
		p1.writedata();
		p1.payslip();

	}
	
};
/*	void callpayslip()
	{
		Registeration r;
		string option;
		cout << "press E for emergency O for opd ";
		cin >> option;
		if (option == "e" || option == "E")
		{
			r.setEmergency(option);
			r.setOPD("0");
		}
		else {
			r.setOPD(option);
			r.setEmergency("0");
		}
		Rooms rom;
		rom.IsRoomAvailable();
		cout << rom.getroomNumber() << endl;
		pay.generetePaySlip();

	}*/

