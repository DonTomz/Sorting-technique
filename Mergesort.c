#include <stdio.h>

// Added a function prototype for the merge function
void merge(int a[100], int lb, int mid, int ub);

void mergesort(int a[100], int lb, int ub) {
    int mid;
    if (lb < ub) {
        mid = (lb + ub) / 2;
        mergesort(a, lb, mid);
        mergesort(a, mid + 1, ub);
        merge(a, lb, mid, ub);
    }
}

void merge(int a[100], int lb, int mid, int ub) {
    int i, j, k, b[100];
    i = lb;
    j = mid + 1;
    k = lb; // Initialize k to lb

    while (i <= mid && j <= ub) {
        if (a[i] < a[j]) {
            b[k] = a[i];
            i++;
        } else {
            b[k] = a[j];
            j++;
        }
        k++;
    }

    while (i <= mid) {
        b[k] = a[i];
        i++;
        k++;
    }

    while (j <= ub) {
        b[k] = a[j];
        j++;
        k++;
    }

    // Copy the merged elements back to the original array a
    for (k = lb; k <= ub; k++) {
        a[k] = b[k];
    }
}

void printArray(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
}

int main() {
    int n = 0, a[100], i;

    printf("Enter the Size of Array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("\nBefore Merge Sorting, the Elements are:\n");
    printArray(a, n);

    printf("\nAfter Merge Sorting:\n");
    mergesort(a, 0, n - 1);
    printArray(a, n);

    return 0;
}
