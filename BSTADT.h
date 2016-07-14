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

template <class ItemType>
class BSTADT : public BSTADT <ItemType> {

private:
  Node<ItemType>* rootPtr;
  int numberofelements;

public:
  
  //------------------------------------------------------------
  // Constructor and Destructor Section.
  //------------------------------------------------------------
  BSTADT();
  BSTADT( const ItemType& rootItem);
  BSTADT( const BSTADT<ItemType>& tree);

  Node<ItemType>* insertInorder(const ItemType& newEntry);

  int getnumberofelements() const ;
  
};
