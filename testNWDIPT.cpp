#include <iostream>
#include <string>
#include <assert.h>
#include "NWDIPT.cpp"

using namespace std;

int main(){

    assert(findChar("The quick brown fox", 'e') == 2);
    assert(findChar("Cat's bat about yarn", 'e') == -1);
    
    assert(findString("The quick brown fox", "he") == 1);
    assert(findString("Cat's bat about yarn", "he") == -1);

    assert(findChar("The quick brown fox", 'x') == 18);
    assert(findString("The quick brown fox", "ox") == 17);

    assert(findChar("The quick brown fox", 't') == 0);
    assert(findChar("The quick brown fox", 'B') == 10);
    
    assert(findString("THE QUICK BROWN FOX", "he") == 1);
    assert(findString("The quick brown fox", "HE") == 1);

    assert(findChar("The quick brown fox", 'e', 1) == 2);
    assert(findChar("The quick brown fox", 'e', 4) == -1);
    
    assert(findString("The quick brown fox", "qu", 1) == 4);
    assert(findString("The quick brown fox", "qu", 10) == -1);

    assert(findString("The quick brown fox", "") == -1);

    cout << "All code works fine!" << '\n';

    return 0;

}