#include <vector>
#include <iostream>

int getSum(const std::vector<int>& vec) {
    int sum = 0;

    for (int element : vec) {
        sum += element;
    }

    return sum;
}

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

    int sum = getSum(numbers);
    int min = getMin(numbers);

    std::cout << "Sum of the vector elements: " << sum << std::endl;
    std::cout << "Minimum of the vector elements: " << min << std::endl;

    return 0;
}
