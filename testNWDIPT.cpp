#include <iostream>
#include <string>
#include <assert.h>
#include "NWDIPT.cpp"

using namespace std

;int main(){

    assert(findChar("The quick brown fox", 'e') == 2);
    assert(findChar("Cat's bat about yarn", 'e') == -1);
    

    cout << "All code works well!" << '\n';

    return 0;

}