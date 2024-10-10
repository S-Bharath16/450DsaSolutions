#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

int matrixChainRecursive(vector<int>& arr, int i, int j) {
    // Base case: When there's only one matrix, no multiplication needed
    if (i == j)
        return 0;
    
    int minCost = INT_MAX;

    // Place parenthesis at different positions between first and last matrix
    // and recursively calculate the minimum cost for each split
    for (int k = i; k < j; k++) {
        int cost = matrixChainRecursive(arr, i, k) + 
                   matrixChainRecursive(arr, k + 1, j) + 
                   arr[i - 1] * arr[k] * arr[j];
        
        // Find the minimum cost among all possible splits
        minCost = min(minCost, cost);
    }

    return minCost;
}

int main() {
    vector<int> arr = {10, 20, 30, 40};
    int n = arr.size();
    cout << "Minimum cost to multiply matrices: " << matrixChainRecursive(arr, 1, n - 1) << endl;
    return 0;
}

