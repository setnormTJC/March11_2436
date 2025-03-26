#include"SmartPointerSinglyLinkedList.h"
#include <iostream>


SmartPointerSinglyLinkedList::SmartPointerSinglyLinkedList(const std::string& valueInitiallyAtHeadOfList)
{
	pHead->dataOfInterest = valueInitiallyAtHeadOfList;
	pHead->addressOfNextNode = nullptr; //being EXPLICIT with this, but not necessary, I think 
}

void SmartPointerSinglyLinkedList::insertAtFront(const std::string& valueToInsertAtFront)
{
	std::unique_ptr<SmartPointerNode> newNode = std::make_unique<SmartPointerNode>(); //use auto, if desired  

	newNode->dataOfInterest = valueToInsertAtFront;

	newNode->addressOfNextNode = std::move(pHead);

	pHead = std::move(newNode);
}

void SmartPointerSinglyLinkedList::printList()
{
	//auto pCurrent = std::move(pHead);

	//while (pCurrent != nullptr)
	//{
	//	std::cout << pCurrent->dataOfInterest << "\n";
	//	pCurrent = std::move(pCurrent->addressOfNextNode);
	//}

	//WRONG up above

	
}

void SmartPointerSinglyLinkedList::clear()
{
}
