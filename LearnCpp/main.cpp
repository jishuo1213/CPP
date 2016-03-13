#include <iostream>
#include "seq_container.h"
#include <vector>
#include <list>
#include <array>
#include <forward_list>
#include <string>
//#include "Screen.h"
//#include "A_class.h"

using namespace std;

// string str1 = "aaaaa";
// string str2 = "bbbbb";
// const int a = 12;
// constexpr A_class ca(str1);

using ivecItertor = vector<int>::iterator;

int main()
{

    forward_list<string> ilist;

    for(int i = 1; i < 20; ++i) {
        ilist.emplace_front(i, 'a');
    }

    string s1 = "bb";
    string s2 = "cc";

    findAndInsert(ilist, s1, s2);

    for(string s : ilist)
        cout << s << endl;

    /* vector<int> ivec;
     for(int i = 0; i < 20; ++i) {
         ilist.push_front(i);
         ivec.push_back(i);
     }

     deleteOddNum(ilist);

     for(int i : ilist)
         cout << i << endl;*/

    //    int temp = 90;
    //    ilist.push_back(temp);
    //    temp = 434;
    //    int &last = ilist.back();
    //    cout << last<<endl;

    /*
        ivecItertor first = ivec.begin();
        ivecItertor middle = ivec.end();
        middle = middle - 9;

        cout << *first << endl;
        ivec.insert(first, 12);

        cout << *first << "=====" << endl;


        ivecItertor iend = ivec.end();
        while(first != iend) {
            cout << *first << endl;
            ++first;
        }*/

    //    bool res = compareListAndVector(ilist, ivec);
    //    cout << res << endl;
    /*    vector<string> strVec;
        char cstr[] = { 'a', 'a', 'a', '\0' };
        cout << sizeof(cstr) << endl;
        list<char*> sList(10, cstr);
        listToVector(sList, strVec);
        for(char* str : sList) {
            cout << str << endl;
        }
        for(string& str : strVec) {
            cout << str << endl;
        }*/
    //    vector<int> ivec;
    //    for(int i = 0 ; i != 20; ++i) {
    //        ivec.push_back(i);
    //    }
    //    int res = *(findNumIterator(ivec.begin(),ivec.end(),50));
    //    cout << res <<endl;
    //    readFileScreen("input");
    //    vector<string> svec;
    //    readFileByWord("note",svec);
    //    cout << svec.size()<<endl;
    //    for(string &s:svec) {
    //        cout<<s<<endl;
    //    }
    //    endoffilebit(cin);
    //    ca.print(cout);
    //    cout << ca.scval<<endl;
    //    Screen s2(24,80,' ');
    //    Screen s1(24,80,'c');
    //    Window_mgr windows;
    //    windows.add(s2);
    //    windows.add(s1);
    //    windows.print(1);
    //    windows.clear(1);
    //    windows.print(1);
    return 0;
}
