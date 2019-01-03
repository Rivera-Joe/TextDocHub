#pragma once
#include <string>
#include <iostream>
#include <fstream>

#ifndef FILING_H;

using namespace std;

string path;
string name;
string FileData;

struct file {

	void getPath() {  //prompts user to enter the desired file path

		cout << "please enter the path to the location you would like to save your file:\n";
		
		cin >> path;
	}


	void getName() { // retrieves the file name from the user
		
		getline(cin, name);
	}


	void getData() { // retrieves the data to be entered to the document from the user
		
		getline(cin, FileData);
	}

	void WPmakeFile() { // makes the custom file for the user using the information they entered/selected
		ofstream txtFile;
		txtFile.open(path + "/" + name + ".txt");
		txtFile << FileData;
		txtFile.close();
	}
	void NPmakeFile() {
		path = "C://users/shels/onedrive/desktop/DDocuments"; // created a default path to folder on the desktop
		ofstream NPFile;
		NPFile.open(path + "/" + name + ".txt");
		NPFile << FileData;
		NPFile.close();
	}

	void setPath() {                                       // gives user an option of where to save the document
		cout << "would you like to save to:\n"
			<< "1 - desktop\n"
			<< "2 - documents\n"
			<< "3 - other\n";
		int choice;
		cin >> choice;
		switch (choice) {
		case 1:
			path = "C://users/shels/onedrive/desktop"; //creates path to desktop
			break;

		case 2:
			path = "C://users/shels/onedrive/documents"; // creates path to documents
			break;

		default:
			getPath();
			break;
		}
	}
};







#endif // !FILING_H;
