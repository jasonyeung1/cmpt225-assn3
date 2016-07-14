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
	english = '/0';
	klingon = '/0';

}

Word::Word(char english, char klingon) {
	english = inpenglish;
  klingon = inpklingon;
}

char Word::getEnglish() const {
	return english;
}

char Word::getKlingon() const {
	return Klingon;
}

