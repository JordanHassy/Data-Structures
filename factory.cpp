#include <iostream>
#include "adt_list.h"
using namespace std;

int main(int, char* argv[]) {
    //setting up factory
    int input{}, factoryNum{stoi(argv[1])};
    List<int> factory;
    while (cin >> input){ 
        factory.append(input);
    }


    for (List<int>::Iterator i = factory.getHead(); i; ++i) {
        if (*i % factoryNum != 0) {
            int placeholder = *i;
            i.remove();
            while(placeholder % factoryNum != 0) {
                placeholder++;
                if(i)
                    ++i;
            }
            if(i)
                i.insert(placeholder);
             else 
                factory.append(placeholder);

            if(!i)
                break;
        }
    }

    for  (List<int>::Iterator j = factory.getHead(); j; ++j)
        cout << *j << " ";
    cout << endl;


    return 0;
}