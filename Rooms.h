#pragma once
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Rooms
{
protected:
	
	int floor;
	int totalrooms;
	int occupiedrooms;
	int roomNumber;

public:
	void settotalrooms(int tr)
	{
		totalrooms = tr;
	}
	int gettotalrooms()
	{
		return totalrooms;
	}
	void setoccupiedrooms(int avr)
	{
		occupiedrooms = avr;
	}
	int getoccupiedrooms()
	{
		return occupiedrooms;
	}
	void setroomNumber(int rn)
	{
		roomNumber = rn;
	}
	int getroomNumber()
	{
		return roomNumber;
	}
	void setfloor(int f)
	{
		floor = f;
	}
	int getfloor()
	{
		return floor;
	}
	Rooms()
	{
		roomNumber = 0;
		floor = 0;
		totalrooms = 0;
		occupiedrooms = 0;
	}
	Rooms(int rn, int f)
	{
		roomNumber = rn;
		floor = f;
	}
	
	void writedata()
	{
		out.open("Rooms.txt", ios::app);
		out << floor << endl;
		out << totalrooms << endl;
		out << occupiedrooms << endl;
		out.close();
	}
	Rooms IsRoomAvailable()
	{
		Rooms obj;
		
		in.open("Rooms.txt");
		if (in.is_open())
		{
			while (!in.eof())
			{
				in >> floor;
				in >> totalrooms;
				in >> occupiedrooms;
				if (in.eof())
				{
					break;
				}
				cout << "occupied rooms" << occupiedrooms << endl;
				if (occupiedrooms < totalrooms)
				{
					int roomavailable = occupiedrooms + 1;
					obj.setfloor(floor);
					obj.settotalrooms(totalrooms);
					obj.setoccupiedrooms(occupiedrooms);
					obj.setroomNumber(roomavailable);
					
					break;
				}
			}
			in.close();
		}
		Rooms an,c, *r = new Rooms[c.count()];
		int count1 = c.count();
		
		r=an.readdata();
		out.open("Rooms.txt");
		out.close();
		for (int i = 0; i < count1; i++)
		{
			
			if (r[i].getfloor() == obj.getfloor())
			{
				obj.writedata();
			}
			else r[i].writedata();
		}
		cout << "room no " << obj.getroomNumber() << endl;
		return obj;
	}
	int count()
	{
		int count = 0;
		in.open("Rooms.txt");
		if (in.is_open())
		{
			while (!in.eof())
			{
				in >> floor;
				in >> totalrooms;
				in >> occupiedrooms;
				if (in.eof())
				{
					break;
				}
				count++;
			}
			
			in.close();
		}
		return count;
	}
	Rooms *readdata()
	{
		Rooms c;
		int total=c.count();
		cout <<"total"<< total << endl;
		Rooms *obj1 = new Rooms[total];
		in.open("Rooms.txt");
		if (in.is_open())
		{
			for (int i = 0; i < total; i++)
			{
				in >> floor;
				in >> totalrooms;
				in >> occupiedrooms;
				
				obj1[i].setfloor(floor);
				obj1[i].settotalrooms(totalrooms);
				obj1[i].setoccupiedrooms(occupiedrooms);
				obj1[i].setroomNumber(occupiedrooms + 1);
				
			}
			in.close();
		}
		/*for (int j = 0; j < c.count(); j++)
		{
			cout << obj1[j].getfloor() << endl;

			cout << obj1[j].gettotalrooms() << endl;
			cout << obj1[j].getoccupiedrooms() << endl;
			cout << obj1[j].getroomNumber() << endl;
		}*/
		return obj1;
	}
};