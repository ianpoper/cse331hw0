#ifndef HW0UTILITY_H_
#define HW0UTILITY_H_

#include "Utility.h"
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class HW0Utility: public Utility<std::vector<int>> {
public:
    HW0Utility(){};

    std::vector<int> readFile(std::string filename){
        
        vector<int> in_vector; 
        fstream input(filename, ios_base::in);
        int vec_size;
        input >> vec_size;
        in_vector.clear();
        for(int i=1;i<=vec_size;i++) {
            int temp;
            input >> temp;
            in_vector.push_back(temp);
        }
        input.close();
        return in_vector;
    }
};
#endif
