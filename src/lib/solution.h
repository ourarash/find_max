#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>

class Solution {
public:
  int FindMax(std::vector<int> &inputs);
  int FindMaxRecursive(std::vector<int> &inputs);

private:
  int FindMaxRecursiveAux(std::vector<int> &inputs, int left, int right);
};

#endif