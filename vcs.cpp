#include <vector>
#include <iostream>

int getSum(const std::vector<int>& vec) {
    int sum = 0;

    for (int element : vec) {
        sum += element;
    }

    return sum;
}

float getAverage(const std::vector<int>& vec){
    int length = 0;
    for (int element : vec) {
        length += 1;
    }
    int sum = getSum(vec);
    float average = sum/length;
    
    return average;
}


int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int sum = getSum(numbers);
    float average = getAverage(numbers);

    std::cout << "Sum of the vector elements: " << sum << std::endl;
    std::cout << "Average of the vector elements: " << average << std::endl;

    return 0;
}
