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

void demoThreeNodeSinglyLinkedList()
{
	auto head = std::make_unique<Node>(); //replace with auto for better readability? 
	head->dataOfInterest = "Run away";

	auto secondNode = std::make_unique<Node>();
	secondNode->dataOfInterest = ", but we're";

	//make the secondNode the LAST node in the list by doing: 
	//secondNode->addressOfNextNode = nullptr;

	//NOW we LINK the head node and the second node: 
	head->addressOfNextNode = std::move(secondNode);

	/*Now add a THIRD node and make it the new LAST node*/
	auto thirdNode = std::make_unique<Node>();
	thirdNode->dataOfInterest = "running in circles!";
	thirdNode->addressOfNextNode = nullptr; //this will make thirdNode the last node (once linked below)



	//update second node's "addressOfNextNode" to the address of the THIRD node 
	head->addressOfNextNode->addressOfNextNode = std::move(thirdNode);



	//can we print the contents of the third node? 
	//std::cout << thirdNode->dataOfInterest << "\n"; //SHOULD be "running in circles"  (CAN'T do this) 
	//std::cout << head->addressOfNextNode->addressOfNextNode->dataOfInterest << "\n";

	//std::cout << head->addressOfNextNode->addressOfNextNode->addressOfNextNode->dataOfInterest << "\n";


}

void demoFAILEDattemptAtCircularlyLinkedList()
{
	auto head = std::make_unique<Node>(); //replace with auto for better readability? 
	head->dataOfInterest = "Run away";

	auto secondNode = std::make_unique<Node>();
	secondNode->dataOfInterest = ", but we're";

	//NOW we LINK the head node and the second node: 
	head->addressOfNextNode = std::move(secondNode);


	/*Now add a THIRD node and (attempt to) make it POINT back at the FIRST node (a CIRCULARLY linked list)*/
	/*The "Josephus problem" -> an application of circularly-linked lists*/
	auto thirdNode = std::make_unique<Node>();
	thirdNode->dataOfInterest = "running in circles!";
	thirdNode->addressOfNextNode = std::move(head); 
	//"moving" head is problematic here because a "unique" pointer is used!

}

void demoNONFAILUREAttemptAtCircularlyLinkedList()
{
	auto head = new RawPointerNode;
	head->data = "Around";

	auto secondNode = new RawPointerNode;
	secondNode->data = "the";

	//NOW we LINK the head node and the second node: 
	head->pNext = secondNode;

	auto thirdNode = new RawPointerNode;
	thirdNode->data = "world";

	//NOW, link the second to the third: 
	secondNode->pNext = thirdNode;

	//Finally, link the third back to the head (for a circularly-linked list)
	thirdNode->pNext = head;




	/*************************Now, traverse the list using a "current" node *****/
	RawPointerNode* current = head; //start ... at the start 

	while (current != nullptr)
	{
		std::cout << current->data << "\n";
		//move to next node (NOT by using something like i++ -> this is for ARRAYS)
		current = current->pNext;

		std::cin.get();
	}
}

int main()
{


	LinkedList linkedList("Alice, our dear friend");

	linkedList.insertAtFront("Bob Boblaw"); //Arrested Development

	linkedList.insertAtFront("Carol"); //Arrested Development
	linkedList.insertAtFront("Darth"); //Arrested Development




}
