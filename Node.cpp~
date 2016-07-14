/*
 * filename: EKTapp.cpp
 * 
 * Created on: July 7, 2016
 * Author: Jason Yeung, Bob Tian
 */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
//#include "BSTADT.h"
//#include "Node.h"
//#include "Word.h"

using namespace std;

bool readDataFile(const char* filename) {
	ifstream myfile (filename);
	if (myfile.is_open())
	{
	cout << "READING: " << filename << endl;
	cout << "----------------------------------" << endl;
	string line;
	while ( getline (myfile,line) )
	{
		cout << line << "\n";
	}
	cout << "----------------------------------" << endl;
	cout << "DATAFILE END" << endl;
	myfile.close();
	return true;
	}
	else cout << "ERROR: Unable to open data file";
	return false;
}


int main() {
	BSTADT* TranslatorLib = new BSTADT();

	if ( readDataFile("datafile.txt"); ) {
		
	}
}
