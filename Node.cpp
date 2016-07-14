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

template <class ItemType>
Node<ItemType>::Node() {
}

template <class ItemType>
Node<ItemType>::Node(const ItemType& anItem) {
    data = anItem;
    leftChildPtr = rightChildPtr = NULL;
}
template <class ItemType>
void Node<ItemType>::setItem(const ItemType& anItem) {

}
template <class ItemType>
ItemType Node<ItemType>::getItem() const {

}
template <class ItemType>
Node<ItemType>* Node<ItemType>::getLeftChildPtr() const {

}
template <class ItemType>
Node<ItemType>* Node<ItemType>::getRightChildPtr() const {

}
template <class ItemType>
void Node<ItemType>::setLeftChildPtr(Node* leftPtr) {

}
template <class ItemType>
void Node<ItemType>::setRightChildPtr(Node* rightPtr) {

}
