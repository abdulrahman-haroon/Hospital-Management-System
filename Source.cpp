#include<iostream>
#include<string>
#include<windows.h>
using namespace std;
#include"Patient.h"
#include"Person.h"
//#include"Login.h"
#include"Adminstration.h"
#include"Rooms.h"
#include"Registeration.h"
#include"Nurse.h"
#include"Hospital.h"
int main()
{
	char rerun;
	Hospital h;
	Adminstration a;
	string username = "n/a";
	string password = "n/a";
	int attempts = 0;

main:system("cls");
	cout << "\t\t\t\t\t" << h.gethospitalname() << endl;
	
	cout << "1) Patient\t2) Doctor\t3) Admin  " << endl;
	//cout << "2) Doctor " << endl;
	//cout << "3) Admin " << endl;
	int availableoption;
	cin >> availableoption;
	switch (availableoption)
	{
	case 1:
		
		while (attempts < 3)
		{
			cout << "Enter Username:";
			cin >> username;
			cout << "Enter Password:";
			cin >> password;
			if (username == "Patient"&&password == "Patient")
			{
				cout << "\t\tWelcome For Appoinment" << endl;
				break;
			}
			else
			{
				cout << "\t\tInvalid login attempt. Please Try again." << endl;
				attempts++;
			}
		}
		if (attempts == 3)
		{
			cout << "Too many login attempts." << endl;
			return 0;
		}
	do{
		system("cls");
		cout << "\t\t\t\t\t\tPatient Appoinment" << endl << endl<<endl;
		cout << "1) Appoinment" << endl;
		cout << "2) Exit" << endl;
		int choice;
		cin >> choice;
		system("cls");
		switch (choice)
		{
		case 1:
		{
			cout << endl;
			cout << "\t\t\t\t\t\tAdd Patient." << endl;
			a.addPatient();

			break;
		}
		case 2:
		{
			goto main;
		}
		}
		cout << "Press Y to goto the main menu " << endl;
		cin >> rerun;
		while (rerun != 'y' && rerun != 'Y')
		{
			cout << "wrong input try again!" << endl;
			cin >> rerun;
		}

	mark3:system("cls");
		system("cls");

	} while (rerun == 'y' || rerun == 'Y');
		
	
	case 2:
		while (attempts < 3)
		{
			cout << "Enter Username:";
			cin >> username;
			cout << "Enter Password:";
			cin >> password;
			if (username == "doctor"&&password == "doctor")
			{
				cout << "\t\tWelcome For Appoinment" << endl;
				break;
			}
			else
			{
				cout << "\t\tInvalid login attempt. Please Try again." << endl;
				attempts++;
			}
		}
		if (attempts == 3)
		{
			cout << "Too many login attempts." << endl;
			return 0;
		}
		do {
			system("cls");
			cout << "\t\t\t\t\t\tDoctor's Portal " <<endl<< endl;
			/*cout << "1) Add Doctor " << endl;
			cout << "2) Delete Doctor" << endl;
			cout << "3) search Doctor" << endl;
			cout << "4) Salary " << endl;
			cout << "5) Exit " << endl;
			int choice;
			cin >> choice;
			system("cls");
			switch (choice)
			{
			case 1:
			{
				cout << endl;
				cout << "\t\t\t\t\t\tAdd Doctor." << endl;

				a.adddoctor();
				break;
			}
			case 2:
			{
				cout << endl;
				cout << "\t\t\t\t\t\tDelete Doctor." << endl;
				a.deleteDoctor();
				break;
			}
			case 3:
			{
				cout << endl;
				cout << "\t\t\t\t\t\tSearch Doctor." << endl;
				a.searchdoctor();
				break;
			}
			case 4:
			{
				cout << endl;
				cout << "\t\t\t\t\t\tCalculate Doctor." << endl;
				a.calculatesalary();
				break;
			}
			case 5:
			{
				goto main;
			}
			}*/
			cout << "1)Patient Records." << endl;
			cout << "2)How Many Patients." << endl;
			cout << "3)Exit" << endl;
			Patient p;
			Adminstration a;
			int choice,choice1;
			
			string fname,lname;
			cin >> choice;
			system("cls");
			switch (choice)
			{
			case 1:
			{
				cout << "Patient Records." << endl;
				a.searchPatient();
				break;

			case 2:
				
				break;
			}
			case 3:
			{
				goto main;
			}
			}
			cout << "Press Y to goto the main menu " << endl;
			cin >> rerun;
			while (rerun != 'y' && rerun != 'Y')
			{
				cout << "wrong input try again!" << endl;
				cin >> rerun;
			}

		system("cls");
			system("cls");

		} while (rerun == 'y' || rerun == 'Y');

	case 3:
		
		while (attempts < 3)
		{
			cout << "Enter Username:";
			cin >> username;
			cout << "Enter Password:";
			cin >> password;
			if (username == "User"&&password == "admin")
			{
				cout << "\t\tWelcome User" << endl;
				break;
			}
			else
			{
				cout << "\t\tInvalid login attempt. Please Try again." << endl;
				attempts++;
			}
		}
		if (attempts == 3)
		{
			cout << "Too many login attempts." << endl;
			return 0;
		}
		do {

			{
				system("cls");
				cout << "\t\t\t\t\t" << h.gethospitalname() << endl;
				cout << "\t\t\t\t\t\tAdministration." << endl;
				cout << "1) Patients" << endl;
				cout << "2) Doctor " << endl;
				cout << "3) Nurse" << endl;
				cout << "4) Department" << endl;
				cout << "5) Exit" << endl;
				int option;
				cin >> option;
				cout << endl;
				switch (option)
				{
				case 1:
				{ 
					system("cls");
					cout << "1) Add Patient " << endl;
					cout << "2) Delete patient" << endl;
					cout << "3) search patient" << endl;
					int choice;
					cin >> choice;
					switch (choice)
					{
					case 1:
					{
						cout << endl;
						cout << "\t\t\t\t\t\tAdd Patient." << endl;
						a.addPatient();

						break;

					}
					case 2:
					{
						cout << endl;
						cout << "\t\t\t\t\t\tDelete Patient." << endl;
						a.deletepatient();
						break;

					}
					case 3:
					{
						cout << endl;
						cout << "\t\t\t\t\t\tSearch Patient." << endl;
						a.searchPatient();
						break;

					}
					default:
						cout << "\t\tError Type From 1-3." << endl;

					}
					break;
				}
				case 2:
				{
					system("cls");
					cout << "1) Add Doctor " << endl;
					cout << "2) Delete Doctor" << endl;
					cout << "3) search Doctor" << endl;
					cout << "4) Salary " << endl;
					int choice;
					cin >> choice;
					switch (choice)
					{
					case 1:
					{
						cout << endl;
						cout << "\t\t\t\t\t\tAdd Doctor." << endl;

						a.adddoctor();
						break;
					}
					case 2:
					{
						cout << endl;
						cout << "\t\t\t\t\t\tDelete Doctor." << endl;
						a.deleteDoctor();
						break;
					}
					case 3:
					{
						cout << endl;
						cout << "\t\t\t\t\t\tSearch Doctor." << endl;
						a.searchdoctor();
						break;
					}
					case 4:
					{
						cout << endl;
						cout << "\t\t\t\t\t\tCalculate Doctor." << endl;
						a.calculatesalary();
						break;
					}
					}
					break;
				}
				case 3:
				{
					system("cls");
					cout << "1) Add Nurse " << endl;
					cout << "2) Delete Nurse" << endl;
					cout << "3) Search Nurse" << endl;
					cout << "4) Salary " << endl;
					int choice;
					cin >> choice;
					switch (choice)
					{
					case 1:
					{
						cout << endl;
						cout << "\t\t\t\t\t\tAdd Nurse." << endl;
						a.addNurse();
						break;
					}
					case 2:
					{
						cout << endl;
						cout << "\t\t\t\t\t\tDelete Nurse." << endl;
						a.deleteNurse();
						break;
					}
					case 3:
					{
						cout << endl;
						cout << "\t\t\t\t\t\tSearch Nurse." << endl;
						a.searchNurse();
						break;
					}
					case 4:
					{
						cout << endl;
						cout << "\t\t\t\t\t\tCalculate Nurse Salary." << endl;
						a.calculateNursesalary();
						break;
					}
					}
					break;
				}
				case 4:
				{
					system("cls");
					cout << "1) Add Department " << endl;
					cout << "2) Delete Department" << endl;
					cout << "3) Search Department" << endl;
					int choice;
					cin >> choice;
					switch (choice)
					{
					case 1:
					{
						a.adddepartment();
						break;
					}
					case 2:
					{
						a.deletedepartment();
						break;
					}
					case 3:
					{
						a.searchdepartment();
						break;
					}
					}
					break;
				}
				case 5:
				{
					goto main;
					//goto mark3;
				}
				}
				cout << "Press Y to goto the main menu " << endl;
				cin >> rerun;
				while (rerun != 'y' && rerun != 'Y')
				{
					cout << "wrong input try again!" << endl;
					cin >> rerun;
				}

			system("cls");
				system("cls");

			} 
			//cout << "Press Y to goto the main menu " << endl;
			//cin >> rerun;
			/*while (rerun != 'y' && rerun != 'Y')
			{
				cout << "wrong input try again!" << endl;
				cin >> rerun;
			}*/

			//mark3:system("cls");
			//	system("cls");
		//	} while (rerun == 'Y' || rerun == 'y');
		}while (rerun == 'y' || rerun == 'Y');
	}


	/*cout << endl;
	string username;
	string password;
	int attempts = 0;
	while (attempts < 3)
	{
		cout << "Enter Username:";
		cin >> username;
		cout << "Enter Password:";
		cin >> password;
		if (username == "User"&&password == "admin")
		{
			cout << "\t\tWelcome User"<<endl;
			break;
		}
		else
		{
			cout << "\t\tInvalid login attempt. Please Try again." << endl;
			attempts++;
		}
	}
	if (attempts == 3)
	{
		cout << "Too many login attempts." << endl;
		return 0;
	}

		do {
			system("cls");
			cout << "\t\t\t\t\t" << h.gethospitalname() << endl;
			cout << "\t\t\t\t\t\tAdministration." << endl;
			cout << "1) Patients" << endl;
			cout << "2) Doctor " << endl;
			cout << "3) Nurse" << endl;
			cout << "4) Department" << endl;
			cout << "5) Exit" << endl;
			int option;
			cin >> option;
			cout << endl;
			switch (option)
			{
			case 1:
			{
				cout << "1) Add Patient " << endl;
				cout << "2) Delete patient" << endl;
				cout << "3) search patient" << endl;
				int choice;
				cin >> choice;
				switch (choice)
				{
				case 1:
				{
					cout << endl;
					cout << "\t\t\t\t\t\tAdd Patient." << endl;
					a.addPatient();

					break;

				}
				case 2:
				{
					cout << endl;
					cout << "\t\t\t\t\t\tDelete Patient." << endl;
					a.deletepatient();
					break;

				}
				case 3:
				{
					cout << endl;
					cout << "\t\t\t\t\t\tSearch Patient." << endl;
					a.searchPatient();
					break;

				}
				default:
					cout << "\t\tError Type From 1-3." << endl;

				}
				break;
			}
			case 2:
			{
				cout << "1) Add Doctor " << endl;
				cout << "2) Delete Doctor" << endl;
				cout << "3) search Doctor" << endl;
				cout << "4) Salary " << endl;
				int choice;
				cin >> choice;
				switch (choice)
				{
				case 1:
				{
					cout << endl;
					cout << "\t\t\t\t\t\tAdd Doctor." << endl;

					a.adddoctor();
					break;
				}
				case 2:
				{
					cout << endl;
					cout << "\t\t\t\t\t\tDelete Doctor." << endl;
					a.deleteDoctor();
					break;
				}
				case 3:
				{
					cout << endl;
					cout << "\t\t\t\t\t\tSearch Doctor." << endl;
					a.searchdoctor();
					break;
				}
				case 4:
				{
					cout << endl;
					cout << "\t\t\t\t\t\tCalculate Doctor." << endl;
					a.calculatesalary();
					break;
				}
				}
				break;
			}
			case 3:
			{
				cout << "1) Add Nurse " << endl;
				cout << "2) Delete Nurse" << endl;
				cout << "3) Search Nurse" << endl;
				cout << "4) Salary " << endl;
				int choice;
				cin >> choice;
				switch (choice)
				{
				case 1:
				{
					cout << endl;
					cout << "\t\t\t\t\t\tAdd Nurse." << endl;
					a.addNurse();
					break;
				}
				case 2:
				{
					cout << endl;
					cout << "\t\t\t\t\t\tDelete Nurse." << endl;
					a.deleteNurse();
					break;
				}
				case 3:
				{
					cout << endl;
					cout << "\t\t\t\t\t\tSearch Nurse." << endl;
					a.searchNurse();
					break;
				}
				case 4:
				{
					cout << endl;
					cout << "\t\t\t\t\t\tCalculate Nurse Salary." << endl;
					a.calculateNursesalary();
					break;
				}
				}
				break;
			}
			case 4:
			{
				cout << "1) Add Department " << endl;
				cout << "2) Delete Department" << endl;
				cout << "3) Search Department" << endl;
				int choice;
				cin >> choice;
				switch (choice)
				{
				case 1:
				{
					a.adddepartment();
					break;
				}
				case 2:
				{
					a.deletedepartment();
					break;
				}
				case 3:
				{
					a.searchdepartment();
					break;
				}
				}
				break;
			}
			case 5:
			{
				return 0;
				goto mark3;
			}
			}
			cout << "Press Y to goto the main menu " << endl;
			cin >> rerun;
			while (rerun != 'y' && rerun != 'Y')
			{
				cout << "wrong input try again!" << endl;
				cin >> rerun;
			}

	mark3:system("cls");
		system("cls");
	} while (rerun=='Y'||rerun=='y');*/



	
	system("pause");
	return 0;
}