#include "unordered_singlylinkedlist.hpp"

/*
 
 Assume that a singly linked list is implemented with a header node,
 but no tail node, and that it maintains only a pointer to the header node.
 Write a class that includes methods to:
 
 1- return the size of the linked list
 2- print the linked list
 3- test if a value x is contained in the linked list
 4- add a value x if it is not already contained in the linked list
 5- remove a value x if it is contained in the linked list
 
 */

class LinkedList{
    
public:
    LinkedList();
    int listSize(); // (1)
    void printList(); // (2)
    bool inList(int x); // (3)
    void addValue(int x); // (4)
    void removeValue(int x); // (5)
    
private:
    node * head;
    int sz;
    
};

LinkedList::LinkedList(){
    head = NULL;
}

int LinkedList::listSize(){
    
    return sz;
    
}

void LinkedList::printList(){
    
    node * temp = head;
    
    while (temp != NULL){
        cout << temp->getData() << endl;
        temp = temp->getNextNode();
    }
    
}

bool LinkedList::inList(<#int x#>){
    
    node * temp = head;
    
    while(temp != NULL){
        if(temp->getData() == x){
            return true; // If x is in the list
        }
        
        temp = temp->getNextNode();
    }
    
    return false; // If x is not in the list
    
}

void LinkedList::addValue(<#int x#>{
    
    if(inList(x)){
        return;
    }
    
    node * temp = new(node); // Create the node
    temp->setData(x);
    
    temp->setNextNode(head); // Link the new node to point at the head of the list
    
    head = temp; // Make the head of the list point to the new node

    sz++;
    
}

void LinkedList::removeValue(<#int x#>){
    
    if(!inList(x)){
        return;
    }
    
    node * temp = head;
    
    if( head->getData() == x ){
        delete temp;
    }
    else{
        while( temp->getNextNode()->getData() != x ){
            temp = temp->getNextNode();
        }
        
        node * ptr = temp->getNextNode();
        
        temp->setNextNode(ptr->getNextNode());
        
        delete ptr;
    }
    
    sz--;
    
}



                          
                          

