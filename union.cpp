#include "union.hpp"

// Upper bound: O(n)
// Lower bound: O(n)

List<int> union(const list<int> & list1, const list<int> & list2)
{
    List<int> list3 = list1; // Create a third list
    auto itr1 = list3.begin(); // textbook pg. 84
    auto itr2 = list2.begin();
    
    while( itr1 != list3.end() && itr2 != list2.end() ){
        
        if( *itr1 == *itr2 ){
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

