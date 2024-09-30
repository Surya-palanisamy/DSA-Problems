#include <iostream>
#include <vector>

void moveZeros(std::vector<int>& arr) {
    int lastNonZeroIndex = 0;

  
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != 0) {
            arr[lastNonZeroIndex] = arr[i];
            lastNonZeroIndex++;
        }
    }

   
    for (int i = lastNonZeroIndex; i < arr.size(); i++) {
        arr[i] = 0;
    }
}

int main() {
    std::vector<int> arr = {0, 1, 0, 3, 12};
    
    moveZeros(arr);
    
   
    for (int num : arr) {
        std::cout << num << " ";
    }
    
    return 0;
}
