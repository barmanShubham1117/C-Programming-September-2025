# Day 6: Data Structures and Algorithms - Arrays

## Array Fundamentals

**Definition**: Collection of elements of same data type stored in contiguous memory locations.

**Key Properties**:
- Fixed size (in static arrays)
- Random access using index
- Elements stored sequentially

---

## Basic Array Operations

### 1. Linear Search
**Concept**: Search element by checking each position sequentially.
**Time Complexity**: O(n)
```c
int linearSearch(int arr[], int n, int target) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) return i;
    }
    return -1;
}
```

### 2. Array Rotation
**Concept**: Shift elements left/right by specified positions.
**Approach**: Store first element, shift others, place first at end.
```c
void rotateLeft(int arr[], int n) {
    int temp = arr[0];
    for(int i = 0; i < n-1; i++) {
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
}
```

### 3. Find Maximum/Minimum
**Concept**: Traverse array and track largest/smallest element.
```c
int findMax(int arr[], int n) {
    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) max = arr[i];
    }
    return max;
}
```

### 4. Array Reversal
**Concept**: Swap elements from both ends moving towards center.
```c
void reverse(int arr[], int n) {
    for(int i = 0; i < n/2; i++) {
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
}
```

---

## Intermediate Algorithms

### 5. Two Sum Problem
**Concept**: Find two numbers that add up to target.
**Approach**: Use hash table or two pointers.
**Time Complexity**: O(n)

### 6. Binary Search
**Concept**: Search in sorted array by dividing search space.
**Time Complexity**: O(log n)
```c
int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n-1;
    while(left <= right) {
        int mid = left + (right-left)/2;
        if(arr[mid] == target) return mid;
        if(arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}
```

### 7. Kadane's Algorithm (Maximum Subarray Sum)
**Concept**: Find maximum sum of contiguous subarray.
**Time Complexity**: O(n)
```c
int maxSubarraySum(int arr[], int n) {
    int maxSum = arr[0], currentSum = arr[0];
    for(int i = 1; i < n; i++) {
        currentSum = (arr[i] > currentSum + arr[i]) ? arr[i] : currentSum + arr[i];
        maxSum = (currentSum > maxSum) ? currentSum : maxSum;
    }
    return maxSum;
}
```

### 8. Remove Duplicates (Sorted Array)
**Concept**: Use two pointers to modify array in-place.
**Time Complexity**: O(n)

---

## Advanced Techniques

### 9. Two Pointer Technique
**Applications**: 
- Merge sorted arrays
- Container with most water
- Trapping rainwater

**Pattern**: Use two pointers moving from opposite ends or same direction.

### 10. Sliding Window
**Applications**:
- Maximum/minimum in subarrays
- Subarray with given sum

### 11. Array Rotation (K positions)
**Efficient Approach**: 
1. Reverse entire array
2. Reverse first k elements
3. Reverse remaining elements

### 12. Peak Element
**Concept**: Element greater than or equal to neighbors.
**Approach**: Binary search approach for O(log n) solution.

---

## Key Problem-Solving Patterns

### Pattern 1: Single Pass
- Linear search, max/min finding
- Counting occurrences

### Pattern 2: Two Pointers
- Array reversal, two sum
- Merge operations

### Pattern 3: Divide and Conquer
- Binary search
- Peak finding

### Pattern 4: Dynamic Programming
- Maximum subarray sum
- Maximum product subarray

---

## Time Complexity Summary

| Operation | Best Case | Average Case | Worst Case |
|-----------|-----------|--------------|------------|
| Linear Search | O(1) | O(n) | O(n) |
| Binary Search | O(1) | O(log n) | O(log n) |
| Array Rotation | O(n) | O(n) | O(n) |
| Two Sum | O(n) | O(n) | O(n) |
| Kadane's Algorithm | O(n) | O(n) | O(n) |

---

## Common Pitfalls
- Array bounds checking
- Integer overflow in sum calculations
- Handling empty arrays
- Off-by-one errors in loops