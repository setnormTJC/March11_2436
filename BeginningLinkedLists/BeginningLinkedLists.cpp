// BeginningLinkedLists.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "LinkedList.h"

#include <iostream>


void demoTheNeedForSMARTPointers()
{
	while (true)
	{
		//this is the old, dumb way that many textbooks still use: 
		//int* ptrToInt = new int; //infinite memory leak  
		//delete ptrToInt; 

		//this is the SMART, modern C++ way to dynamically allocate memory and work with POINTERS
		std::unique_ptr<int> ptrToInt = std::make_unique<int>();

	}
}

int main()
{
	std::unique_ptr<Node> head = std::make_unique<Node>();
	head->dataOfInterest = "Alice";

	std::unique_ptr<Node> secondNode = std::make_unique<Node>();
	secondNode->dataOfInterest = "Bob Boblaw";

	//NOW we LINK the two: 
	head->addressOfNextNode = std::move(secondNode); 

	//make the secondNode the LAST node in the list by doing: 
	secondNode->addressOfNextNode = nullptr;

	//head.dataOfInterest


}
