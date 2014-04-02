//Input failure and the clear function

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name;
	int age = 0;
	int weight = 0; 
	double height = 0.0; 

	cout << "Enter name, age, weight, and " 
	     << "height: "; 

	cin >> name >> age >> weight >> height; 
	cout << endl; 

	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Weight: " << weight << endl;
	cout << "Height: " << height << endl;

	cin.clear();		//Restore input stream
	cin.ignore(200,'\n');	//Clear the buffer

	cout << "Enter name, age, weight, and " 
	     << "height: "; 

	cin >> name >> age >> weight >> height; 
	cout << endl; 

	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Weight: " << weight << endl;
	cout << "Height: " << height << endl;

	return 0;
}
