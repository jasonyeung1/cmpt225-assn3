/*
 * filename: BSTADT.cpp
 * 
 * Class Description: A data collection ADT class to satisfy Assn 3's requiremetns.
 * Class Invariant: 
 *
 * Creation date: July 7, 2016
 * Author: Jason Yeung, Bob Tian
 */

#include "BSTADT.h"

rootPtr = NULL;

//bool BSTADT::add(const Word& newEntry) {
Node* BSTADT::add(const Word& newEntry) {
  if (rootPtr == NULL) {
    rootPtr = Node(newEntry);
  }
  else if (newEntry.english[0] <= rootPtr->data.english[0]) {
    rootPtr->leftChildPtr = add(rootPtr->leftChildPtr, newEntry);
  }
  else {
    rootPtr->rightChildPtr = add(rootPtr->rightChildPtr, newEntry);
  }
  return rootPtr;
}

