/*
 * filename: Node.cpp
 * 
 * Class Description:
 *
 * Creation date: July 7, 2016
 * Author: Jason Yeung, Bob Tian
 */

#include "Node.h"
#include "Word.h"

Node::Node() {
}

Node::Node(const Word& anItem) {
    Node* newNode = new Node();
    newNode->data = anItem;
    newNode->leftChildPtr = newNode->rightChildPtr = NULL;
    return newNode;  
}

Node::Node(const Word& anItem, Node* leftPtr, Node* rightPtr) {
    Node* newNode = new Node();
    newNode->data = anItem;
    newNode->leftChildPtr = leftPtr;
    newNode->rightChildPtr = rightPtr;
    return newNode;  
}
