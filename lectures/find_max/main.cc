#include "find_max.h" 

int main(){
    std::vector<int> input ={1, 2, 100, 4, 5};
    auto result = FindMax(input);
    std::cout<< "Result: " << result << std::endl;
    return 0;
}
