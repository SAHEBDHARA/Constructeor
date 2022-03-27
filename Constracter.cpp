// OOP class and object.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<list>
using namespace std;

class Newcar {
public:
	string Name;
	string OwnerName;
	int speed;
	list<string>colorofcar;

	Newcar(string name, string owner) { // constructor
										//A constructor is a special type of member function that is called automatically when an object is created.
		Name = name;
		OwnerName = owner;
		speed = 0;

	}
};

int main()
{

	Newcar cardetails("Audi","Loos");
	Newcar cardetails1("Tata", "Ops");
	cardetails.colorofcar.push_back("my first cons");
	cardetails.colorofcar.push_back("my second cons");

	

	cout << " Name : " << cardetails.Name << endl;
	cout << " OwnerName :" << cardetails.OwnerName << endl;
	cout << " Speed of the car :" << cardetails.speed << endl;
	for (string car : cardetails.colorofcar) {
		cout << car << endl;
	}
	cout << " Name : " << cardetails1.Name << endl;
	cout << " OwnerName :" << cardetails1.OwnerName << endl;
	cout << " Speed of the car :" << cardetails1.speed << endl;



	system("pause>0");
	return 0;
}


