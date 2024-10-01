// Given an array and a integer k, we need to find the max element in each of the contiguous subarrays.
// Input: 2 4 7 1 6 3
// k = 3 (Size of arrays)
// Output: 7 7 7 6

#include<bits/stdc++.h>
using namespace std;

vector<int> maxOfSubArray(int arr[], int n, int k) {
    vector<int> result;

    // Loop through each subarray of size k
    for(int i = 0; i <= n - k; i++) {
        int max = arr[i];  // Assume the first element in the subarray is the maximum

        // Check the next k elements in the subarray
        for(int j = i; j < i + k; j++) {
            if(arr[j] > max) {
                max = arr[j];  
            }
        }

        result.push_back(max);  
    }

    return result; 
}
