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
#include "BSTADT.h"
#include "Word.h"

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
	    // add word into translator lib
		cout << line << "\n";
	}
	cout << "----------------------------------" << endl;
	cout << "DATAFILE END\n" << endl;
	myfile.close();
	return true;
	}
	else cout << "ERROR: Unable to open data file\n";
	return false;
}


int main() {
	BSTADT* TranslatorLib = new BSTADT();

    // if data file can be read and stored
	if ( readDataFile("datafile.txt") ) {
	    
	    cout << "Type an English word to preview the Klingon translation if found."
	    cout << 'Type "Display" to preview all words in the translator.'
		cout << "INPUT READY: " << endl;
		
		string aLine;
        while(getline(cin, aLine)) {   // while (there is data)
            stringstream ss(aLine);
            // ss >> <some variable>;  
            // Do the translation.
        }
	}
}
