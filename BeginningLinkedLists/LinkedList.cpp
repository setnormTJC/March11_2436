#include "LinkedList.h"
#include <iostream>

SinglyLinkedList::SinglyLinkedList(const std::string& valueInitiallyAtHeadOfList)
{
	SinglyLinkedList::pHead = new RawPointerNode; 

	SinglyLinkedList::pHead->data = valueInitiallyAtHeadOfList;

}

void SinglyLinkedList::insertAtFront(const std::string& valueToInsertAtFront)
{
	RawPointerNode* pNewNode = new RawPointerNode; 
	pNewNode->data = valueToInsertAtFront; 

	pNewNode->pNext = pHead; 
	pHead = pNewNode; 

}

void SinglyLinkedList::printList()
{
	RawPointerNode* pCurrent = pHead; 

	//int i = 0; 
	//i = i + 1; //this is "similar" to pCurrent = pCurrent->pNext below

	//for (int i = 0; i < arrayName.size(); ++i) //this is ARRAY iteration
	while (pCurrent != nullptr) //this is "node-based" iteration 
	{
		//"visit" (print the contents of) the current node : 
		std::cout << pCurrent->data << "\n";

		pCurrent = pCurrent->pNext; 
	}

	/*A WRONG way to do it!*/
	//while (pHead != nullptr) 
	// {
	//	std::cout << pHead->data << "\n";
	//	pHead = pHead->pNext; // Uh-oh — you just lost the head of the list!
	//}
}

void SinglyLinkedList::clear()
{
	/*similar to printList*/
	RawPointerNode* pCurrent = pHead;

	/*A WRONG way: */
	//while (pCurrent != nullptr) 
	//{
	//	//DE-allocate memory address of current node : 
	//	pCurrent = pCurrent->pNext;

	//	delete pCurrent; //NO! ->this will only delete one node
	//}

	//a fairly good way: 
	//while (pCurrent != nullptr)
	//{
	//	RawPointerNode* temp = pCurrent; 
	//	//step "forward"
	//	pCurrent = pCurrent->pNext; 
	//	//delete the previous
	//	delete temp;
	//}

	//the best? way? 
	while (pHead != nullptr)
	{
		RawPointerNode* temp = pHead; 
		pHead = pHead->pNext; 

		delete temp; 
	}
}

SinglyLinkedList::~SinglyLinkedList()
{
	clear(); 
}




