#pragma once


#include<memory>
#include <string>

class Car
{
	std::string make; //as in "Ford", "Honda", "Toyota" 
	int numberOfMilesOnOdometer; //ex: hopefully not 300'000 

};

class RawPointerNode
{
public: 
	std::string data; 
	RawPointerNode* pNext = nullptr; 
};


class Node
{
public: 
	std::string dataOfInterest; 
	//Node* addressOfNextNodeInList; //what is this thing called Node* ('tis a pointer (a memory address))

	std::unique_ptr<Node> addressOfNextNode; //this means list is initially EMPTY 

};


class LinkedList
{
private: 
	RawPointerNode* pHead = nullptr; //similar to setting topIndex = -1 (for a stack) 

public: 
	LinkedList() = default; 
	LinkedList(const std::string& valueInHeadOfList); 

	void insertAtFront(const std::string& valueToInsertAtFront);
};

