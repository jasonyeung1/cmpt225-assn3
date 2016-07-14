/*
 * filename: BSTADT.cpp
 *
 * Class Description: A data collection ADT class to satisfy Assn 3's requiremetns.
 * Class Invariant:
 *
 * Creation date: July 7, 2016
 * Author: Jason Yeung, Bob Tian
 */
#include <string>
#include "Node.h"
#include "BSTADT.h"

template <class ItemType>
BSTADT<ItemType>::BSTADT() {
  numberofelements = 0;
}

template <class ItemType>
Node<ItemType>* BSTADT<ItemType>::insertInorder(const ItemType& newEntry) {
  if (rootPtr == NULL) {
    rootPtr = Node<ItemType>(newEntry);
    numberofelements++;
  }
  else if (newEntry.english[0] <= rootPtr->data.english[0]) { 
    rootPtr->leftChildPtr = add(rootPtr->leftChildPtr, newEntry);
  }
  else {
    rootPtr->rightChildPtr = add(rootPtr->rightChildPtr, newEntry);
  }
  return rootPtr;
}

