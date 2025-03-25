#include "LinkedList.h"
#include <iostream>

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

void LinkedList::printList()
{
	RawPointerNode* pCurrent = pHead; 

	//int i = 0; 
	//i = i + 1; 

	//for (int i = 0; i < arrayName.size(); ++i) //this is ARRAY iteration
	while (pCurrent != nullptr) //this is "node-based" iteration 
	{
		//"visit" (print the contents of) the current node : 
		std::cout << pCurrent->data << "\n";

		pCurrent = pCurrent->pNext; 
	}


}

void LinkedList::clear()
{
	pHead = nullptr; 
}
