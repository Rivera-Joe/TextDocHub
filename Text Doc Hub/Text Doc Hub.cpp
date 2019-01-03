// Text Doc Hub.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Created by Joe Rivera on 01/02/2019

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include "filing.h"

using namespace std;

int main()
{
	file newfile;
	cout << "what would you like to name your file?\n\n";

	newfile.getName();//runs function to set a name for the file

	cout << "please enter the file data\n\n";

	newfile.getData(); //runs a function to set the data to input into the file




	cout << "would you like to designate a filepath? (y/n)\n\n";

	char reply;
	cin >> reply;
	if (reply == 'y') {
		cout << "where would you like to save the file?\n";

		newfile.setPath(); // function to set a path for the file



		newfile.WPmakeFile(); // function to create file with filepath
	}
	else {
		newfile.NPmakeFile(); // function to create file without a path
	}
	

		

		
	


	return 0;
}


