#include <iostream>
using namespace std;
int* binarySearch(int* arr, int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return &arr[mid];
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return nullptr;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int target = 6;
    int* result = binarySearch(arr, size, target);

    if (result != nullptr) {
        std::cout << "Phan tu " << target << " duoc tim thay tai dia chi: " << result << std::endl;
    } else {
        std::cout << "Phan tu " << target << " khong tim thay trong mang." << std::endl;
    }
    delete result;
    return 0;
}

