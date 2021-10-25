#include "intersection.hpp"

// Upper bound: O(n^2)
// Lower bound: O(n^2)

List<int> intersection(const list<int> & list1, const list<int> & list2)
{
    List<int> list3; // Create a third list
    auto itr1 = list1.begin(); // textbook pg. 84
    auto itr2 = list2.begin();
    
    while( itr1 != list1.end() && itr2 != list2.end() ) // textbook pg. 84
    {
        if( *itr1 == *itr2 ){
            list3.push_back(*itr1);
            ++itr1;
            ++itr2;
        }
        else if (*itr1 < *itr2){
            ++itr1;
        }
        else{
            ++itr2;
        }
    }
    
    return list3;
    
}

/*
 result
 curr1<-l1
 curr2<-l2
 
while(curr1.next != null && curr2.next !null){
    if(curr1 < curr2)
        curr1<-curr1.next
    else if(curr1 > curr 2)
        curr2<-curr2.next
    else
        result.pushBack(curr1)
        increment both
}
*/
