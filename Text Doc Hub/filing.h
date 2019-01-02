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

	void getPath() {
		
		cin >> path;
	}


	void getName() {
		
		getline(cin, name);
	}


	void getData() {
		
		getline(cin, FileData);
	}

	void WPmakeFile() {
		ofstream txtFile;
		txtFile.open(path + "/" + name + ".txt");
		txtFile << FileData;
		txtFile.close();
	}
	void NPmakeFile() {
		ofstream NPFile;
		NPFile.open(name + ".txt");
		NPFile << FileData;
		NPFile.close();
	}
};







#endif // !FILING_H;
