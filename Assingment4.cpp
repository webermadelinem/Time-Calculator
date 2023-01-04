#include <iostream>

//  Assingment: Time Calculator
//  Description: This program asks the user for a number of seconds and determines 
//  the amount of days, hours, or minutes in that number of seconds. 
//  Author: Madeline Weber
//  Date: Sepetember 17, 2022

using namespace std;

int main()
{
	int numberEntered, numberMinutes, numberHours, numberDays; // Declare variables
	
	// Ask user for a number of seconds
	cout << "Please enter the number of seconds: \n";
	cin >> numberEntered;
	
	if ( numberEntered <= 59 )
	{
		cout << numberEntered << " is less than one minute.\n";
	}
	
	else if ( numberEntered >= 60 && numberEntered < 3600 )
	{
		numberMinutes = ( numberEntered / 60 );
		
		if ( numberMinutes == 1 )
		{
			cout << "There is " << numberMinutes << " minute in " << numberEntered <<" seconds.\n";
		}
		else
		{
			cout << "There are " << numberMinutes << " minutes in " << numberEntered << " seconds.\n";
		}
	}
	
	else if  ( numberEntered >= 3600 && numberEntered < 86400 )
	{
		numberHours = ( numberEntered / 3600 );
		
		if ( numberHours == 1 )
		{
			cout << "There is " << numberHours << " hour in " << numberEntered <<" seconds.\n";
		}
		else
		{
			cout << "There are " << numberHours << " hours in " << numberEntered <<" seconds.\n";
		}
	}
	
	else if ( numberEntered >= 86400 )
	{
		numberDays = ( numberEntered / 86400 );
		if ( numberDays == 1)
		{
			cout << "There is " << numberDays << " day in " << numberEntered <<" seconds.\n";
		}
		else
		{
			cout << "There are " << numberDays << " days in " << numberEntered <<" seconds.\n";
		}
	}
	
	
	return 0;
}
