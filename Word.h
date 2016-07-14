/*
 * filename: Word.h
 * 
 * Class Description:
 *
 * Creation date: July 7, 2016
 * Author: Jason Yeung, Bob Tian
 */

#pragma once
class Word {

private:
	
	char english;
 	char klingon;

public:
	// default constructor
	Word();
	
	// constructor w/ input
	Word(char inpenglish, char inpklingon);	
	
	// get the translation
	char getEnglish() const;
	char getKlingon() const;

};

