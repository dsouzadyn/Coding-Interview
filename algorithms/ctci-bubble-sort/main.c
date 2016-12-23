#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}

/*
 *
 * Improved bubble sort
 *
 */
void bubble_sort(int *ar, int n) {
	int swaps = 0;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n-1; j++) {
			if(ar[j] > ar[j+1]) {
				swap(&ar[j], &ar[j+1]);
				swaps = swaps + 1; // Apparently uses lesser assembly instructions and hence is faster.
			}
			if(swaps == 0) break;
		}
	}
	printf("Array is sorted in %d swaps.\n", swaps);
	printf("First Element: %d\nLast Element: %d\n", ar[0], ar[n-1]);
}

int main() {
	int n;
	scanf("%d", &n);
	int *a = malloc(sizeof(int) * n);
	for(int a_i = 0; a_i < n; a_i++) {
		scanf("%d", &a[a_i]);
	}
	bubble_sort(a, n);
	return 0;
}
