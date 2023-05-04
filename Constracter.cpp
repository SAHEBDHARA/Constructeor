// OOP class and object.cpp : This file contains the 'main' function. Program execution begins and ends there

#include <iostream>
#include<list>
using namespace std;

class Newcar {
public:
	string Name; // attributes
	string OwnerName;
	int speed;
	list<string>colorofcar;

	Newcar(string name, string owner) { // constructor
										//A constructor is a special type of member function that is called automatically when an object is created.
		Name = name;
		OwnerName = owner;
		speed = 0;

	}
	void getinfo() { // class method
		cout << " Name : " << Name << endl;
		cout << " OwnerName :" << OwnerName << endl;
		cout << " Speed of the car :" << speed << endl;
		for (string car : colorofcar) {
			cout << car << endl;
		}
	}
};

int main()
{

	Newcar cardetails("Audi","Loos"); // create object using constructor 
	Newcar cardetails1("Tata", "Ops");
	cardetails.colorofcar.push_back("my first cons");
	cardetails.colorofcar.push_back("my second cons");

	
	cardetails.getinfo();
	cardetails1.getinfo();



	system("pause>0");
	return 0;
}


