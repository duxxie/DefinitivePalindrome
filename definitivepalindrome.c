#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char string[100];
	int j = 0;
	printf("Insert Something: ");
	scanf("%s", string);
	printf("String: %s", string);

	int size = strlen(string);
	char palindrome[size];

	for(int i = size - 1; i >= 0; i--) {
		palindrome[j] = string[i];
		j++;
	}
	palindrome[j] = '\0';
	
	printf("\n");
	
	printf("Inverted: %s",palindrome);
	
	for(int i = 0; i < size; i++){
	    palindrome[i] = tolower(palindrome[i]);
	    string[i] = tolower(string[i]);
	}

	if(strcmp(string, palindrome) == 0) {
		printf("\npalindrome");
	}
	else {
		printf("\nnot palindrome");
	}

	return 0;
}