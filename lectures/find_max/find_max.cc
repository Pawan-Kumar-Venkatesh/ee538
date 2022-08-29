#include "find_max.h" //For your own header files, use quotation marks.

int FindMax(std::vector<int> input){
    if (input.empty()){
        return -1;
    }
    int max = input[0]; // If input is empty, accessing value 0 is explosion: Program crashes.
    for (auto e: input){
        // std::cout << "e: "<< e << std::endl;
        if(e>max){
            max=e;
        }
    }
    return max;
}
