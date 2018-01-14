
#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <vector>

std::vector<int> filterLeft(std::vector<int> list, int pivot);
std::vector<int> filterRight(std::vector<int> list, int pivot);
std::vector<int> append(std::vector<int> left, int pivot, std::vector<int> right);
std::vector<int> Quicksort(std::vector<int> list);


#endif /* QUICKSORT_H */

