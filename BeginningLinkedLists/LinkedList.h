#pragma once


#include<memory>
#include <string>

class Car
{
	std::string make; //as in "Ford", "Honda", "Toyota" 
	int numberOfMilesOnOdometer; //ex: hopefully not 300'000 

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
};

