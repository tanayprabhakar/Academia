#include <stdio.h>

void printSubset(int subset[], int size) {
    printf("{ ");
    for (int i = 0; i < size; i++)
        printf("%d ", subset[i]);
    printf("}\n");
}

void subsetSum(int set[], int subset[], int n, int subsetSize, int total, int index, int target) {
    if (total == target) {
        printSubset(subset, subsetSize);
        return;
    }
    if (index == n || total > target)
        return;

    subset[subsetSize] = set[index];
    subsetSum(set, subset, n, subsetSize + 1, total + set[index], index + 1, target);
    subsetSum(set, subset, n, subsetSize, total, index + 1, target);
}

int main() {
    int set[] = {10, 7, 5, 18, 12, 20, 15};
    int target = 35;
    int n = sizeof(set) / sizeof(set[0]);
    int subset[n];

    printf("Subsets with sum %d:\n", target);
    subsetSum(set, subset, n, 0, 0, 0, target);
    return 0;
}
