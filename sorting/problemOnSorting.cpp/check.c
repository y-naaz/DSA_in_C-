#include <stdio.h>

int main() {
    // Define an array to store 72 names
    char names[72][50]; // Assuming names are up to 50 characters long

    // Initialize the array with some sample names
    for (int i = 0; i < 72; i++) {
        snprintf(names[i], sizeof(names[i]), "Name%d", i + 1);
    }

    // Display the initial list of names
    printf("List of Names (Before Insertion):\n");
    for (int i = 0; i < 72; i++) {
        printf("%s\n", names[i]);
    }

    // Ask the user for the friend's name and the position (k)
    char friendName[50];
    int k;

    printf("\nEnter your best friend's name: ");
    scanf("%s", friendName);
    
    printf("Enter the position (1-72) to insert your friend's name: ");
    scanf("%d", &k);

    // Check if k is within a valid range
    if (k < 1 || k > 72) {
        printf("Invalid position. Position should be between 1 and 72.\n");
        return 1; // Exit with an error code
    }

    // Move names to make space for the new name
    for (int i = 71; i >= k; i--) {
        for (int j = 0; names[i - 1][j] != '\0'; j++) {
            names[i][j] = names[i - 1][j];
        }
        names[i][k - 1] = '\0'; // Clear the original position
    }

    // Insert your friend's name at the kth position
    for (int i = 0; friendName[i] != '\0'; i++) {
        names[k - 1][i] = friendName[i];
    }

    // Display the updated list of names
    printf("\nList of Names (After Insertion):\n");
    for (int i = 0; i < 72; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}

