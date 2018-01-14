
#include <iostream>
#include <vector>
#include <algorithm>
#include "QuickSort.h"

using namespace std;


// filterLeft(list, pivot) returns a new vector<int> that has all the elements 
//   greater than or equal to pivot in list removed
// Note: this function uses pass by value to create a new copy of list every time it is called.
//       This is necessary because mutating the original list would cause an error when filterRight(list, pivot)
//       is called later

vector<int> filterLeft(vector<int> list, int pivot){
                                                    // this is the lambda expression WHHOAAA!!!
    list.erase(remove_if(list.begin(), list.end(), [pivot](const int& x) {return (x >= pivot);}) , list.end());
    
    return list;
}


// filterRight(list, pivot) returns a new vector<int> that has all the elements
//   less than or equal to pivot removed
// Note: see documentation from filterLeft(list, pivot) on why this function uses pass by value

vector<int> filterRight(vector<int> list, int pivot){
                                                   // another lambda expression?? W H A T ?
    list.erase(remove_if(list.begin(), list.end(), [pivot](const int& x) {return (x <= pivot);}), list.end());
    
    return list;
}


// append(left, pivot, right) appends left, pivot, and right 
//   in that order as a single vector<int> and returns it 

vector<int> append(vector<int> left, int pivot, vector<int> right){
    if (left.empty()){
        if(right.empty()){
            vector<int> v;
            v.push_back(pivot);
            
            return v;
        }
        else{
            right.insert(right.begin(), pivot);
            return right;
        }
    }
    
    else{
        left.push_back(pivot);
        left.insert(left.end(), right.begin(), right.end());
        
        return left;
    }
}


// Quicksort(list) sorts using a recursive quicksort algorithm
// requires: list does not contain any duplicate elements;

vector<int> Quicksort(vector<int> list){
    if (list.empty() || list.size() == 1){
        return list;
    }
    
    else{
        int pivot = list.at((int) list.size() / 2);
        
        vector<int> left = filterLeft(list, pivot);
        vector<int> right = filterRight(list, pivot);
        
        return append(Quicksort(left), pivot, Quicksort(right));
    }
}
