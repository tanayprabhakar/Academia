#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int start, end;
} Activity;

int compare(const void *a, const void *b) {
    return ((Activity *)a)->end - ((Activity *)b)->end;
}

void activitySelection(Activity arr[], int n) {
    qsort(arr, n, sizeof(Activity), compare);

    printf("Selected activities: ");
    int lastEnd = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i].start >= lastEnd) {
            printf("(%d, %d) ", arr[i].start, arr[i].end);
            lastEnd = arr[i].end;
        }
    }
}

int main() {
    Activity activities[] = {{1, 3}, {2, 5}, {4, 6}, {6, 7}, {5, 8}};
    int n = sizeof(activities) / sizeof(activities[0]);
    activitySelection(activities, n);
    return 0;
}
