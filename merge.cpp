
List<int> merge(const list<int> & list1, const list<int> & list2)
{
    List<int> list3 = list1; // Create a third list
    auto itr1 = list3.begin(); // textbook pg. 84
    auto itr2 = list2.begin();
    
    while( itr1 != list3.end() && itr2 != list2.end() ){
        
        if( *itr1 == *itr2 ){
            // list3.insert(itr1, *itr2); => if you want to include repeated numbers
            ++itr1;
            ++itr2;
        }
        else if( *itr1 > *itr2 ){
            list3.insert(itr1, *itr2); // textbook pg. 83
            ++itr2;
        }
        else{
            ++itr1;
        }
        
    }
    
    // Check if list2 has more elements than list1; if it does
    //   add them to list3
    
    if( itr1 == list3.end() ){
        while(itr2 != l2.end())
        {
            list3.push_back(*itr2);
            ++itr2;
        }
    }
    
    return list3;
    
}

SinglyLinkedListNode MergeLists(SinglyLinkedListNode headA, SinglyLinkedListNode headB){
    
    SinglyLinkedListNode<int> mergedList = headA;
    
    if(headA == NULL)
        return headB;
    else if(headB == NULL)
        return headA;
    else{
        
        node * tempA = headA;
        node * tempB = headB;
        
        while(tempA != NULL && tempB != NULL){
            
            if(tempA->getData() == tempB->getData()){
                tempA = tempA->getNextNode();
                tempB = tempB->getNextNode();
            }
            else if(tempA->getData() < tempB->getData()){
                
                node * newNode = new(node);
                newNode->setData(tempB->getData());
                
                newNode->setNextNode(tempA->getNextNode());
                tempA->setNextNode(newNode);
                
                tempB = tempB->getNextNode();
                
            }
            else{
                tempA = tempA->getNextNode();
            }
            
        }
        
        
    }
    
    return mergedList;
    
}

// precondition: L1 is not sorted

mergeSort(L1,L2)



