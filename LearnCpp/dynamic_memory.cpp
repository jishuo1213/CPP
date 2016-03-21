#include <iostream>
#include "dynamic_memory.h"

using namespace std;

void process(shared_ptr<int> ptr)
{
    cout<<ptr.unique()<<endl;
    cout<<ptr.use_count()<<endl;
    (*ptr)++;
    cout<<*ptr<<endl;
}