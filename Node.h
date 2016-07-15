/*
 * filename: Node.h
 *
 * Class Description:
 *
 * Creation date: July 7, 2016
 * Author: Jason Yeung, Bob Tian
 */

#include <string>
#include "Word.h"
#include <iostream>


template <class Type>
class Node
{

private:
  Word data;
  Node<Type>*leftChildPtr;
  Node<Type>*rightChildPtr;

public:
  // Constructors
  Node();
  Node(const Type& anItem);

  // Set data to the node
  void setItem(const Type& anItem);

  // Retrieve the data from the node
  Word* getItem();

  // Retrieve Left/Right pointers
  Node<Type>* getLeft() const ;
  Node<Type>* getRight() const ;

  // Set Left/Right pointers
  void setLeft(Node<Type>* leftPtr);
  void setRight(Node<Type>* rightPtr);

};


using namespace std;
template <class Type>
Node<Type>::Node() {
}

template <class Type>
Node<Type>::Node(const Type& anItem) {
    data = anItem;
    leftChildPtr = rightChildPtr = NULL;
}

template <class Type>
void Node<Type>::setItem(const Type& anItem) {
  data = anItem;
}

template <class Type>
Word* Node<Type>::getItem() {
  return &data;
}

template <class Type>
Node<Type>* Node<Type>::getLeft() const {
  return leftChildPtr;
}

template <class Type>
Node<Type>* Node<Type>::getRight() const {
  return rightChildPtr;
}

template <class Type>
void Node<Type>::setLeft(Node<Type>* leftPtr) {
  leftChildPtr = leftPtr;
}

template <class Type>
void Node<Type>::setRight(Node<Type>* rightPtr) {
  rightChildPtr = rightPtr;
}

