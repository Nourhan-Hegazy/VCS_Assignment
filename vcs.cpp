#include <vector>
#include <iostream>


int getMin(const std::vector<int>& vec){
    int min = vec[0];

    for(int element : vec){
        if(element < min){
            min = element;
        }
    }
    return min;
}


int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 0, 6, 7, 8, 9, 10};

    int min = getMin(numbers);

    std::cout << "Minimum of the vector elements: " << min << std::endl;

    return 0;
}
