#include <vector>
#include <iostream>

int getSum(const std::vector<int>& vec) {
    int sum = 0;

    for (int element : vec) {
        sum += element;
    }

    return sum;
}


int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int result = getSum(numbers);

    std::cout << "Sum of the vector elements: " << result << std::endl;

    return 0;
}
