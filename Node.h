/*
 * filename: Node.h
 * 
 * Class Description:
 *
 * Creation date: July 7, 2016
 * Author: Jason Yeung, Bob Tian
 */
#pragma once

class Node
{
  
private:
  Word data;
  Node *leftChildPtr;
  Node *rightChildPtr;
  
public:
  Node();
  Node(const Word& anItem);
  Node(const Word& anItem, Node* leftPtr, Node* rightPtr);
  
  void setItem(const Word& anItem);
  Word getItem() const;
  
  bool isLeaf() const;
  
  Node* getLeftChildPtr() const ;
  Node* getRightChildPtr() const ;

  void setLeftChildPtr(Node* leftPtr);
  void setRightChildPtr(Node* rightPtr);
  
};


