#include <stdio.h>

int main() {
    int limit, i;

    
    printf("Enter the limit: ");
    scanf("%d", &limit);

    // Print numbers from limit to 1
    for(i = limit; i >= 1; i--) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
