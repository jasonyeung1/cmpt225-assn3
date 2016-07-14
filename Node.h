/*
 * filename: Node.h
 *
 * Class Description:
 *
 * Creation date: July 7, 2016
 * Author: Jason Yeung, Bob Tian
 */
#include "Word.h"
#pragma once

template <class ItemType>
class Node
{

private:
  Word data;
  Node<ItemType> *leftChildPtr;
  Node<ItemType> *rightChildPtr;

public:

  Node();
  Node(const ItemType& anItem);

  void setItem(const ItemType& anItem);
  ItemType getItem() const;

  Node<ItemType>* getLeftChildPtr() const ;
  Node<ItemType>* getRightChildPtr() const ;

  void setLeftChildPtr(Node<ItemType>* leftPtr);
  void setRightChildPtr(Node<ItemType>* rightPtr);

};
