#include <bits/stdc++.h>
using namespace std;

// recursive binary search
int binary_search(int array[], int l_idx, int r_idx, int target) {
    if (r_idx >= l_idx) {
        int mid_idx = l_idx + (r_idx - l_idx) / 2;

        if (array[mid_idx] == target) {
            return mid_idx;
        }

        if (array[mid_idx] > target) {
            return binary_search(array, l_idx, mid_idx - 1, target);
        }

        return binary_search(array, mid_idx + 1, r_idx, target);
    }

    return -1;
}

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 10;
    int size = sizeof(array) / sizeof(array[0]);

    int result = binary_search(array, 0, size - 1, target);

    (result == -1) ? cout << "Target is not present in array"
                   : cout << "Target is present at index" << result;

    return 0;
}
