//passing by reference


#include <iostream>
using namespace std;

void RWD();
void FWD();
void AWD();
void driveSelect(int &x); //& is used to pass by reference. 
//It returns the value back to the main function and can be passed to the next function being called.
void driveSelectionSwitch(int x);

int main()
{
	int x = 0; //initialize the value x
	driveSelect(x);
	driveSelectionSwitch(x);
	system("pause");
	return 0;
}

void FWD()
{
	cout << "FWD Engaged" << endl;
}

void AWD()
{
	cout << "AWD Engaged" << endl;
}


void RWD()
{
	cout << "RWD Engaged" << endl;
}



void driveSelect(int &x) //passing x by refrence so it is used in the next function
{
	cout << "Select a drive option: " << endl;
	cout << "1. AWD" << endl;
	cout << "2. FWD" << endl;
	cout << "3. RWD" << endl;

	
	cin >> x;

}

void driveSelectionSwitch(int x)
{
	
	switch (x)
	{
	case 1:
		AWD();
		break;
	case 2:
		FWD();
		break;
	case 3:
		RWD();
		break;
	default:
		cout << "Invalid option" << endl;
	}

}
