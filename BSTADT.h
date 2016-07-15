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

class BSTADT {

private:
  Node* rootPtr;
  int numberofelements;

  // Recursive function to insert nodes into BST
  Node* insert(Node* newNode, Node* currentNode);


public:
  //------------------------------------------------------------
  // Constructor and Destructor Section.
  //------------------------------------------------------------
  BSTADT();

  Node* add(const Word& newEntry);

  // Returns a pointer to the node containing the given value,
  // or nullptr if not found.
  Node* findNode(const Word& target) const ;

  int getnumberofelements() const ;
};
