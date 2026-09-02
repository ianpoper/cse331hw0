#include "HW0Utility.h"
#include "Solution.cpp"
#include <fstream>
#include <vector>

class Driver;

int main(int argc, char** argv) {
    if(argc != 2) {
        printf("Please provide the input filename as the argument.\n");
        return 0;
    }
    HW0Utility Utility;
    std::vector<int> input = Utility.readFile(argv[1]);
    
    Solution s = Solution(input);
    vector<int> studentSolution = s.outputVector();
    
    string output ="[";
    for (auto const& c : studentSolution)
      output += to_string(c) + ", ";
    output = output.substr(0, output.size()-2);
    output += "]";

    std::cout << output << std::endl;

    return 0;
}
