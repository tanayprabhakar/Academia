#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int value, weight;
    double ratio;
} Item;

int compare(const void *a, const void *b) {
    Item *item1 = (Item *)a;
    Item *item2 = (Item *)b;
    if (item1->ratio < item2->ratio) return 1;
    else if (item1->ratio > item2->ratio) return -1;
    return 0;
}

void greedyKnapsack(Item items[], int n, int capacity) {
    qsort(items, n, sizeof(Item), compare);

    int totalValue = 0, totalWeight = 0;
    printf("Items included (value, weight): ");
    for (int i = 0; i < n; i++) {
        if (totalWeight + items[i].weight <= capacity) {
            totalWeight += items[i].weight;
            totalValue += items[i].value;
            printf("(%d, %d) ", items[i].value, items[i].weight);
        }
    }

    printf("\nTotal value (Greedy): %d\n", totalValue);
}

int main() {
    Item items[] = {{60, 10}, {100, 20}, {120, 30}};
    int n = sizeof(items) / sizeof(items[0]);
    int capacity = 50;

    for (int i = 0; i < n; i++) {
        items[i].ratio = (double)items[i].value / items[i].weight;
    }

    greedyKnapsack(items, n, capacity);
    return 0;
}
