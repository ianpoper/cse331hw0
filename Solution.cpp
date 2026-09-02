#include <stdio.h>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

class Solution {

/*
 * Class data:
 * Solution is the constructor, and takes in the vector that was read by the driver.
 * The driver will call outputVector(). This is where you should calculate the resultant vector.
 * You can store both values, if you wish. The constructor stores the input vector in m_inputVector.
 */
    public:
        Solution(vector<int> in_vector);
        vector<int> outputVector();
        vector<int> m_inputVector;
        vector<int> m_outputVector;
};



Solution::Solution(vector<int> in_vector) :
    m_inputVector(in_vector)
{}


vector<int> Solution::outputVector() {
    /*
     * Implement the solution in this function
     * Return the variable "m_outputVector" after you fill it with stable
     * matches.
     */
    int curVal = 0;
    int n = m_inputVector.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j < i) {
                curVal = 0;
            }
            else {
                curVal = 1;
            }
            m_outputVector[i] += m_inputVector[j] * curVal;

        }
    }
    return m_outputVector;
}
