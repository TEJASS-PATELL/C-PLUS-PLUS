#include <iostream>
#include <vector>
#include <climits>  // For INT_MIN

int findSecondLargest(const std::vector<int>& arr) {
    int largest = INT_MIN, secondLargest = INT_MIN;

    for (int num : arr) {
        if (num > largest) {
            secondLargest = largest;
            largest = num;
        } else if (num > secondLargest && num < largest) {
            secondLargest = num;
        }
    }

    return (secondLargest == INT_MIN) ? -1 : secondLargest; // Return -1 if there's no second largest mean all element are same.
}

int main() {
    std::vector<int> arr = {12, 35, 1, 10, 34, 1};
    int secondLargest = findSecondLargest(arr);

    if (secondLargest != -1) {
        std::cout << "The second largest element is " << secondLargest << std::endl;
    } else {
        std::cout << "There is no second largest element." << std::endl;
    }

    return 0;
}
