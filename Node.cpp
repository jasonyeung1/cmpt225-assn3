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

}

Word* Node::getItem() const {

}

Node* Node::getLeftChildPtr() const {

}

Node* Node::getRightChildPtr() const {

}

void Node::setLeftChildPtr(Node* leftPtr) {

}

void Node::setRightChildPtr(Node* rightPtr) {

}
