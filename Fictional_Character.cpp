#include <iostream>

void mod1_part1();
int mod1_part2();

//Standard namespace declaration for less strict codes
using namespace std;

/*
 * based on instruction it is not wanting a user to input a fake character
 * It is wanting me to make a character in the code block
 * then output the character information
 */

int main(){
	string First_Name;
	string Last_Name;
	string Street_Address;
	string City;
	int Zip_Code;

	First_Name = "Valentino";
	Last_Name = "Marquez";
	Street_Address = "1234 Main Street";
	City = "Fort Worth";
	Zip_Code = 76244;

	cout<< "Name: " + First_Name + " " + Last_Name <<endl;
	cout<<"\n";
	cout<<"Address: " << Street_Address << "\n\t " << City << "," << Zip_Code <<endl;

	cout<<"I made changes to include the file corrections for this module" <<endl;

	cout<<"Module 01 part one corrections:" <<endl;
	mod1_part1();

	cout<<endl;
	cout<<endl;
	cout<<"Module 01 part two corrections:" <<endl;

	mod1_part2();

}
