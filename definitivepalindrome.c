#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char string[100];
    char cleaned[100];
    char palindrome[100];
    int j = 0;
    
    printf("Insert Something: ");
    fgets(string, sizeof(string), stdin);

    // Remove newline character if present
    string[strcspn(string, "\n")] = '\0';
    
    // Clean string: Remove spaces and punctuation, and convert to lowercase
    for(int i = 0; string[i] != '\0'; i++) {
        if(isalnum(string[i])) {  // Check if it's a letter or number
            cleaned[j] = tolower(string[i]);
            j++;
        }
    }
    cleaned[j] = '\0';
    
    int size = strlen(cleaned);
    j = 0;
    
    // Reverse the cleaned string
    for(int i = size - 1; i >= 0; i--) {
        palindrome[j] = cleaned[i];
        j++;
    }
    palindrome[j] = '\0';
    
    printf("Cleaned String: %s\n", cleaned);
    printf("Inverted: %s\n", palindrome);
    
    if(strcmp(cleaned, palindrome) == 0) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }
    
    return 0;
}
