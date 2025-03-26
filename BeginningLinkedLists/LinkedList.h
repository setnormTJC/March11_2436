#pragma once


#include<memory>
#include <string>

class RawPointerNode
{
public: 
	std::string data; 
	RawPointerNode* pNext = nullptr; 
};

class SinglyLinkedList
{
private: 
	RawPointerNode* pHead = nullptr; //similar to setting topIndex = -1 (for a stack) 

public: 
	SinglyLinkedList() = default; 
	SinglyLinkedList(const std::string& valueInitiallyAtHeadOfList); 

	void insertAtFront(const std::string& valueToInsertAtFront);

	void printList(); 

	void clear(); 

	/*A WEAKNESS (inconvenience) of using RawPointerNode - needing to call delete in destructor*/
	~SinglyLinkedList(); 
};

