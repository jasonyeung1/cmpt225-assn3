/*
 * filename: Node.cpp
 *
 * Class Description:
 *
 * Creation date: July 7, 2016
 * Author: Jason Yeung, Bob Tian
 */

#include <string>
#include "Node.h"
#include "Word.h"

Node::Node() {
}

Node::Node(const Word& anItem) {
    data = anItem;
    leftChildPtr = rightChildPtr = NULL;
}

void Node::setItem(const Word& anItem) {
  data = anItem;
}

Word* Node::getItem() {
  return &data;
}

Node* Node::getLeftChildPtr() const {
  return leftChildPtr;
}

Node* Node::getRightChildPtr() const {
  return rightChildPtr;
}

void Node::setLeftChildPtr(Node* leftPtr) {
  leftChildPtr = leftPtr;
}

void Node::setRightChildPtr(Node* rightPtr) {
  leftChildPtr = rightPtr;
}
