#ifndef SEQ_CONTAINER_H_INCLUDED
#define SEQ_CONTAINER_H_INCLUDED

#include <vector>
#include <iterator>
#include <string.h>
#include <list>

using namespace std;

extern int findNum(vector<int>::iterator first, vector<int>::iterator second, int num);
extern vector<int>::iterator findNumIterator(vector<int>::iterator first, vector<int>::iterator second, int num);
extern void listToVector(list<char*>& cStringList, vector<string>& strVec);
extern bool compareListAndVector(list<int>& ilist, vector<int>& ivec);

#endif // SEQ_CONTAINER_H_INCLUDED
