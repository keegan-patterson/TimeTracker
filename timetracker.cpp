// Main body of TimeTracker app, currently Hello World
#include <iostream>

#include "timetracker_config.hpp"

int main(int argc, char* argv[]){
    // report version
    std::cout << argv[0] << " Version " << TimeTracker_VERSION_MAJOR << "."
              << TimeTracker_VERSION_MINOR << std::endl;
    std::cout << "Usage: " << argv[0] << " number" << std::endl;

    std::cout << "Hello World" << std::endl;

    return 0;
}
