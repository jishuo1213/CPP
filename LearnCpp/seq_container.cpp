#include "seq_container.h"
#include <vector>
#include <iterator>
#include <list>

using namespace std;

int findNum(vector<int>::iterator first, vector<int>::iterator second, int num)
{
    int index = 0;
    if(first > second) {
        return -1;
    }
    while(first <= second) {
        if(*first == num) {
            return index;
        }
        ++first;
        index++;
    }
    return -1;
}

vector<int>::iterator findNumIterator(vector<int>::iterator first, vector<int>::iterator second, int num)
{
    vector<int>::iterator res;
    if(first > second) {
        return res;
    }
    while(first <= second) {
        if(*first == num) {
            return first;
        }
        ++first;
    }
    return res;
}

void listToVector(list<char*>& cStringList, vector<string>& strVec)
{
    strVec.assign(cStringList.cbegin(), cStringList.cend());
}

bool compareListAndVector(list<int>& ilist, vector<int>& ivec)
{
    if(ilist.size() != ivec.size())
        return false;
    list<int>::iterator listBegin = ilist.begin();
    list<int>::iterator listEnd = ilist.end();
    vector<int>::iterator vecBegin = ivec.begin();
    while(listBegin != listEnd) {
        if(*listBegin == *vecBegin) {
            ++listBegin;
            ++vecBegin;
            continue;
        } else {
            return false;
        }
    }
    return true;
}

void deleteOddNum(forward_list<int>& flist)
{
    using flist_iterator = forward_list<int>::iterator;
    flist_iterator prev = flist.before_begin();
    flist_iterator curr = flist.begin();
    while(curr != flist.end()) {
        if(*curr % 2) {
            curr = flist.erase_after(prev);
        } else {
            prev = curr;
            ++curr;
        }
    }
}

void findAndInsert(forward_list<string>& fstringlist, string& first, string& second)
{
    auto curr = fstringlist.begin();
    auto last = fstringlist.end();
    auto prev = fstringlist.before_begin();
    bool hasFind = false;
    while(curr != last) {
        if(*curr == first) {
           curr = fstringlist.insert_after(curr, second);
           hasFind = true;
        } else {
            ++curr;
            prev++;
        }
    }
    if(!hasFind)
        fstringlist.insert_after(prev,second);
}
