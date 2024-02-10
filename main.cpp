#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    // Check if there are enough arguments
    if (argc < 3) {
        std::cerr << "Usage: " << argv[0] << " <search_string> <default_value> <arg1> <arg2> ..." << std::endl;
        return 1;
    }

    std::string search_string = argv[1];
    std::string default_value = argv[2];

    // Iterate through arguments starting from the 3rd position
    for (int i = 3; i < argc; ++i) {
        // Check if the argument starts with "--" and contains the search string
        if (argv[i][0] == '-' && argv[i][1] == '-' && std::string(argv[i]).find(search_string) != std::string::npos) {
            // If the match is found, return the next argument
            if (i + 1 < argc) {
                std::cout << argv[i + 1] << std::endl;
                return 0;
            } else {
                // If the match is found but there's no next argument, return an error
                std::cerr << "No value found after matching argument." << std::endl;
                return 1;
            }
        }
    }

    // If no match was found, return the default value
    std::cout << default_value << std::endl;
    return 0;
}
