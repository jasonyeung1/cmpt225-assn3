/*
 * filename: BSTADT.cpp
 *
 * Class Description: A data collection ADT class to satisfy Assn 3's requiremetns.
 * Class Invariant:
 *
 * Creation date: July 7, 2016
 * Author: Jason Yeung, Bob Tian
 */
#include "Node.h"
#include <iostream>
#include "BSTADT.h"

using namespace std;

BSTADT::BSTADT() {
  rootPtr = NULL;
  numberofelements = 0;
}

Node* BSTADT::insert(Node* newNode) {

}

Node* BSTADT::add(const Word& newEntry) {
  // create a new node to be inserted
  Node* newNode = new Node(newEntry);
  numberofelements++;

  // insert it recursively
  insert(newNode);
}

int BSTADT::getnumberofelements() const {
  return numberofelements;
}
