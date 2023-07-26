#include <iostream>
#include <algorithm> // For std::sort

double weighted_average(int array[], int n) {
    if (n < 1) {
        return 0;
    }

    // Step 1: Sort the array
    std::sort(array, array + n);

    // Step 2: Calculate the weighted average
    double sum = 0.0;
    double totalWeight = 0.0;
    for (int i = 0; i < n; i++) {
        int curr = array[i];
        int count = 1;
        
        // Calculate the count of the current element
        while (i + 1 < n && array[i] == array[i + 1]) {
            count++;
            i++;
        }

        // Calculate the weighted sum and total weight
        sum += curr * count;
        totalWeight += count;
    }

    // Calculate and return the weighted average
    return sum / totalWeight;
}

int main() {
    int array[] = {1,2,1,4,1,3};
    int n = sizeof(array) / sizeof(array[0]);

    double avg = weighted_average(array, n);
    std::cout << "Weighted Average: " << avg << std::endl;

    return 0;
}
