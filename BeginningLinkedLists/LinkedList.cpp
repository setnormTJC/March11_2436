#include "LinkedList.h"

LinkedList::LinkedList(const std::string& valueInHeadOfList)
{
	LinkedList::pHead = new RawPointerNode; 

	LinkedList::pHead->data = valueInHeadOfList;

}

void LinkedList::insertAtFront(const std::string& valueToInsertAtFront)
{
	RawPointerNode* newNode = new RawPointerNode; 
	newNode->data = valueToInsertAtFront; 

	newNode->pNext = pHead; 
	pHead = newNode; 

}
