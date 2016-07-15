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

Node* BSTADT::insert(Node* newNode, Node* currentNode) {
    if (rootPtr == NULL) {
      rootPtr = newNode;
    }
    else {
      string newWrd, curWrd;
      newWrd = newNode->getItem()->getEnglish();
      curWrd = currentNode->getItem()->getEnglish();

      // element already inside, throw exception
      if (curWrd == newWrd) {
        cout << "Element already inside." << endl;
      }
      // move right
      else if (newWrd > curWrd) {
          if (currentNode->getRight() != NULL) { insert(newNode, currentNode->getRight()); //cout << "moving right" << endl; }
          else {
              //cout << "set right" << endl;
              currentNode->setRight(newNode);
              return newNode;
          }
      }
      // move left
      else if (newWrd < curWrd) {
          if (currentNode->getLeft() != NULL) { insert(newNode, currentNode->getLeft()); //cout << "moving left" << endl; }
          else {
            cout << "set left" << endl;
            currentNode->setLeft(newNode);
            return newNode;
          }
      }
    }

    return NULL;
}

Node* BSTADT::add(const Word& newEntry) {
  // create a new node to be inserted
  Node* newNode = new Node(newEntry);
  numberofelements++;

  // insert it recursively
  insert(newNode, rootPtr);
}

int BSTADT::getnumberofelements() const {
  return numberofelements;
}
