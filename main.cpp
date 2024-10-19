#include "lib.h"
#include <iostream>
#include <boost/url.hpp>

int main(){
    boost::urls::url u("https://www.google.com");
    std::cout << u.normalize()<< std::endl;
    foo();
    foo();

    return 0;
}
