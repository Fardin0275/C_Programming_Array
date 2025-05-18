#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n); // Change this to any number
    int arr[n]; // Make sure it's big enough to hold n+1 elements

    for (int i = 0; i <= n; i++) {
        arr[i] = i;
    }

    // Print the array
    printf("Numbers from 0 to %d:\n", n);
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
