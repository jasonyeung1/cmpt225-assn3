/*
 * filename: Word.cpp
 * 
 * Class Description:
 *
 * Creation date: July 7, 2016
 * Author: Jason Yeung, Bob Tian
 */

#include "Word.h"

Word::Word() {
	english = "NO_VAL";
	klingon = "NO_VAL";
}

Word::Word(char inpenglish, char inpklingon) {
	english = inpenglish;
    klingon = inpklingon;
}

char Word::getEnglish() const {
	return english;
}

char Word::getKlingon() const {
	return klingon;
}

