/*
 * filename: BSTADT.h
 *
 * Class Description: A data collection ADT class to satisfy Assn 3's requiremetns.
 * Class Invariant:
 *
 * Creation date: July 7, 2016
 * Author: Jason Yeung, Bob Tian
 */
#include "Node.h"
#include "Word.h"
#include <iostream>

template <class Type>
class BSTADT {

private:
  Node<Type>* rootPtr;
  int numberofelements;

  // Recursive function to insert nodes into BST
  Node<Type>* insert(Node<Type>* newNode, Node<Type>* currentNode);

  // Recursive function to find nodes in BST
  Node<Type>* seek(string target, Node<Type>* currentNode);

  // Recursive function to print
  void print_all(Node<Type>* currentNode);


public:
  //------------------------------------------------------------
  // Constructor and Destructor Section.
  //------------------------------------------------------------
  BSTADT();

  // adds/inserts the word into the BST
  // returns the inserted node with the value
  // if element is already in, return NULL
  Node<Type>* add(const Type& newEntry);

  // Returns a the translated word to the node containing the given value,
  // or "NOT FOUND" if not found
  string retrieve(string engWrd);

  // Prints all values in the translator
  void print();

  // Gets number of elements
  int getnumberofelements() const ;
};












using namespace std;

template <class Type>
BSTADT<Type>::BSTADT() {
  rootPtr = NULL;
  numberofelements = 0;
}

template <class Type>
Node<Type>* BSTADT<Type>::insert(Node<Type>* newNode, Node<Type>* currentNode) {
    if (rootPtr == NULL) {
      rootPtr = newNode;
      numberofelements++;
      return newNode;
    }
    else {
      string newWrd, curWrd;
      newWrd = newNode->getItem()->getEnglish();
      curWrd = currentNode->getItem()->getEnglish();

      // element already inside
      if (curWrd == newWrd) {
        cout << "~> ERROR: ELEMENT ALREADY EXISTS -- IGNORING" << endl;
      }
      // move right
      else if (newWrd > curWrd) {
          if (currentNode->getRight() != NULL) { insert(newNode, currentNode->getRight()); } //cout << "moving right" << endl;
          else {
              //cout << "set right" << endl;
              currentNode->setRight(newNode);
              numberofelements++;
              return newNode;
          }
      }
      // move left
      else if (newWrd < curWrd) {
          if (currentNode->getLeft() != NULL) { insert(newNode, currentNode->getLeft()); } //cout << "moving left" << endl;
          else {
            // cout << "set left" << endl;
            currentNode->setLeft(newNode);
            numberofelements++;
            return newNode;
          }
      }
    }

    return NULL;
}

template <class Type>
Node<Type>* BSTADT<Type>::seek(string target, Node<Type>* currentNode) {

    if (getnumberofelements() != 0 && currentNode != NULL) {
      string curWrd = currentNode->getItem()->getEnglish();

      if (curWrd == target) {
        return currentNode;
      }
      else if (target > curWrd) {
        return seek(target, currentNode->getRight());
      }
      else if (target < curWrd) {
        return seek(target, currentNode->getLeft());
      }
    }

    return NULL;
}

template <class Type>
void BSTADT<Type>::print_all(Node<Type>* currentNode) {
    if (currentNode != NULL) {
      print_all(currentNode->getLeft());

      cout << currentNode->getItem()->getEnglish() << ":" << currentNode->getItem()->getKlingon() << endl;

      print_all(currentNode->getRight());
    }
};

template <class Type>
Node<Type>* BSTADT<Type>::add(const Type& newEntry) {
  // create a new node to be inserted
  Node<Type>* newNode = new Node<Type>(newEntry);
  numberofelements++;

  // insert it recursively
  insert(newNode, rootPtr);
}

template <class Type>
string BSTADT<Type>::retrieve(string engWrd) {
    Node<Type>* translated = seek(engWrd, rootPtr);
    if (translated) {
      return translated->getItem()->getKlingon();
    }
    else {
      return "NOT FOUND";
    }
}

template <class Type>
void BSTADT<Type>::print() {
  print_all(rootPtr);
};

template <class Type>
int BSTADT<Type>::getnumberofelements() const {
  return numberofelements;
}
