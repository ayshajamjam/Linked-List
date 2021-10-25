#include "sorted_singlylinkedlist.hpp"

/*
 
 Repeat Exercise 3.11, maintaining the singly linked list in sorted order

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
    
    // Check if x is in the list
    if(inList(x)){
        return;
    }
    
    node * temp = new (node);
    temp->setData(x);
    
    // If the list is empty or x is less than value in first node
    if (head == NULL || (x < head->getData())){
        
        temp->setNextNode(head);
        head = temp;
        
    }
    
    // If x is larger than multiple values
    else{
        node * ptr = head;
        while ( ptr->getNextNode != NULL && ptr->getNextNode()->getData() < x ){
            ptr = ptr->getNextNode();
        }
        
        temp->setNextNode(ptr->getNextNode());
        ptr->setNextPtr(temp);
    }
    
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

                          
                          
