#include "seq_container.h"
#include <vector>
#include <iterator>


using namespace std;

int findNum(vector<int>::iterator first,vector<int>::iterator second,int num) {
    int index = 0;
    if(first > second) {
        return -1;
    }
    while (first <= second) {
        if(*first == num) {
            return index;
        }
        ++first;
        index++;
    }
    return -1;
}

vector<int>::iterator findNumIterator(vector<int>::iterator first,vector<int>::iterator second,int num) {
    vector<int>::iterator res;
    if(first > second) {
        return res ;
    }
    while (first <= second) {
        if(*first == num) {
            return first;
        }
        ++first;
    }
    return res;
}

void listToVector(list<char*> &cStringList,vector<string> & strVec) {
    strVec.assign(cStringList.cbegin(),cStringList.cend());
}
