// BeginningLinkedLists.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "LinkedList.h"

#include<forward_list>
#include <iostream>
#include <vector>
#include "SmartPointerSinglyLinkedList.h"



void whatWeDidOnMar25()
{
	SinglyLinkedList linkedList("Alice, our dear friend");

	linkedList.insertAtFront("Bob Boblaw"); //Arrested Development reference
	linkedList.insertAtFront("Carol");
	linkedList.insertAtFront("Darth");
	linkedList.printList();

	/*trying to gain some inspiration from the standard library's singly-linked list implementation*/
	std::forward_list<std::string> fl;
	fl.push_front("not alice");
	fl.push_front("Zordan"); //Zordan, not alice

	std::forward_list<std::string> fl2; // a SECOND forward (singly-linked) list
	fl2.push_front("asdfasdfasdf");

	fl.merge(fl2);

	std::cout << *fl.begin() << "\n"; //dereferencing the first node 
	std::cout << fl.begin()._Ptr << "\n"; //a way to print the address of beginning node

	std::vector<std::string> names;
	
	//names.merge(); //no such method!
	
	//why does a linked list have a merge but not vector? 
}

void demoClear_andDestructor()
{
	SinglyLinkedList linkedList("Alice, our dear friend");

	linkedList.insertAtFront("Bob Boblaw"); //Arrested Development reference
	linkedList.insertAtFront("Carol");
	linkedList.insertAtFront("Darth");

	linkedList.printList();

	linkedList.clear();

};


int main()
{
	SmartPointerSinglyLinkedList spsll; 

	
}
