#pragma once
#include <memory>
#include <string>


class SmartPointerNode
{
public:
	std::string dataOfInterest;
	std::unique_ptr<SmartPointerNode> addressOfNextNode; //this means list is initially EMPTY 

};


class SmartPointerSinglyLinkedList
{
private:
	std::unique_ptr<SmartPointerNode> pHead;

public:
	SmartPointerSinglyLinkedList() = default;
	SmartPointerSinglyLinkedList(const std::string& valueInitiallyAtHeadOfList);

	void insertAtFront(const std::string& valueToInsertAtFront);

	void printList();

	void clear();

};
