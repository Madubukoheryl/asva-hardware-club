/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string fullName;
	cout << "Hello dear, enter your full name: ";
	getline (cin, fullName); // Takes more than one name from the user

	double voltage; // May be decimal
	cout << "Hii again, enter a voltage value: ";
	cin >> voltage;

	double resistance;
	cout << "Is third time the charm? Enter a resistance value: ";
	cin >> resistance;

	float current = voltage / resistance; // Ohm's law: I = V / R
	float power = voltage * current; // P = V * I

	cout << "\n\n";
	cout << "Name: " << fullName << "," << "\n";
	cout << "Current (voltage/resistance)= " << current << "A\n";
	cout << "Power (voltage*current)= " << power << "W\n";


	return 0;
}